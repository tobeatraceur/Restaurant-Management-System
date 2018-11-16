#include"sql_api.h"
#include <QSqlError>
#include<QDebug>

QSqlDatabase sql_api::db;

//准备数据库
void sql_api::db_prepare(){
    if( QSqlDatabase::contains("UUser"))
        db=QSqlDatabase::database("UUser");
    else{
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("UUser");
    }
}

//连接数据库并读入数据
bool sql_api::createConnection()
{
    sql_api::db_prepare();
    if (!db.open()) {
        return false;
    }
    QSqlQuery query(db);

    query.exec("select * from  user");

    while(query.next()){                                  //分号段读取各类用户数据

        if(query.value(0).toLongLong()>=10000)
            customer::_register(
                        query.value(0).toLongLong(),
                        query.value(1).toString()
                        );

        if(query.value(0).toInt()<10000
                &&
                query.value(0).toInt()>=5000)
            manager::_register(
                        query.value(0).toInt(),
                        query.value(1).toString()
                        );

        if(query.value(0).toInt()<5000
                &&
                query.value(0).toInt()>=4000)
            admin::_register(
                        query.value(0).toInt(),
                        query.value(1).toString()
                        );

        if(query.value(0).toInt()>=2000
                &&
                query.value(0).toInt()<3000)
            waiter::_register(
                        query.value(0).toInt(),
                        query.value(1).toString(),
                        query.value(2).toInt(),
                        query.value(3).toInt()
                        );

        if(query.value(0).toInt()>=3000
                &&
                query.value(0).toInt()<4000)
            chef::_register(
                        query.value(0).toInt(),
                        query.value(1).toString(),
                        query.value(2).toInt(),
                        query.value(3).toInt(),
                        query.value(4).toInt()
                        );
    }

    query.exec("select * from dish");                     //读取菜品数据

    while(query.next()){
        dishtype::add(
                    query.value(0).toString(),
                    query.value(1).toInt(),
                    query.value(2).toString(),
                    query.value(3).toInt(),
                    query.value(4).toInt()
                    );
    }

    db.close();
    return true;
}

//保存
void sql_api::save(){

    sql_api::db_prepare();
    if (db.open()) {

        QSqlQuery q(db);
        q.exec("create table user (TRACEUR varchar(20) primary key, password varchar(20),amount int,total int)");//若未建表先建表
        QList<long long>user_keys=user::get_map().keys();

        for(int i=0;i<user_keys.size();i++){
            long long key=user_keys[i];
            QString pw=user::get_map()[key]->get_password();
            QString TRACEUR=QString::number((user::get_map()[key]->get_NO()));

            if(TRACEUR.toLongLong()>=4000){
                q.exec(QString("insert into user values('%1','%2',0,0,0)").arg(TRACEUR,pw));
                q.exec(QString("update user set password='%2' where TRACEUR='%1'").arg(TRACEUR,pw));//若已存在该条数据则更新
            }

            if(TRACEUR.toInt()>=2000&&TRACEUR.toInt()<3000){
                waiter *wai=dynamic_cast<waiter *>(user::get_map()[key]);
                QString amount=QString::number(wai->get_score().get_amount());
                QString total=QString::number(wai->get_score().get_total());
                q.exec(QString("insert into user values('%1','%2',%3,%4,0)").arg(TRACEUR,pw,amount,total));
                q.exec(QString("update user set password='%2',amount=%3,total=%4 where TRACEUR='%1'").arg(TRACEUR,pw,amount,total));
            }

            if(TRACEUR.toInt()>=3000&&TRACEUR.toInt()<4000){
                chef *che=dynamic_cast<chef *>(user::get_map()[key]);
                QString amount=QString::number(che->get_dish_amount());
                QString total=QString::number(che->get_score().get_total());
                QString score_amount=QString::number(che->get_score().get_amount());
                q.exec(QString("insert into user values('%1','%2',%3,%4,%5)").arg(TRACEUR,pw,amount,total,score_amount));
                q.exec(QString("update user set password='%2',amount=%3,total=%4,score_amount=%5 where TRACEUR='%1'").arg(TRACEUR,pw,amount,total,score_amount));
            }

        }

        q.exec("create table dish (name varchar(10) primary key,price int,type varchar(10),amount int,total int)");

        QList<QString>dish_keys=dishtype::get_map().keys();
        for(int i=0;i<dish_keys.size();i++){
            QString name=dish_keys[i];
            QString price=QString::number(
                        dishtype::get_map()[name]
                        ->get_price());
            QString type=dishtype::get_map()[name]
                    ->get_type();
            QString amount=QString::number(
                        dishtype::get_map()[name]
                        ->get_score().get_amount());
            QString total=QString::number(
                        dishtype::get_map()[name]
                        ->get_score().get_total());

            q.exec(QString("insert into dish values('%1',%2,'%3',%4,%5)").arg(name,price,type,amount,total));
            q.exec(QString("update dish set price=%2,amount=%3,total=%4 where name='%1'").arg(name,price,amount,total));
        }

        db.close();
    }

}
