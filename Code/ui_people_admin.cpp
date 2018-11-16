#include "people_admin.h"
#include "ui_people_admin.h"
#include"login.h"
#include<QTableWidget>
people_admin::people_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::people_admin)
{
    ui->setupUi(this);
}

people_admin::~people_admin()
{
    delete ui;
}

void people_admin::on_pushButton_clicked()
{
    this->close();
}

//增加
void people_admin::on_add_clicked()
{
    QString NO=ui->add_ac->text().trimmed();
    QString pw=ui->add_key->text();

    if(NO==""||pw==""){
        QMessageBox::warning(this, tr("Warning"),tr("Add Failed!"), QMessageBox::Ok); //输入为空时抛出异常
        return;
    }

    if(user::get_map().find(NO.toLongLong())!=user::get_map().end())
        QMessageBox::warning(this, tr("Warning"),tr("该账户已存在!"), QMessageBox::Ok);//若已经存在则抛出异常
    else{
        //根据号段动态选择身份增加
        if(NO.toLongLong()>10000)
            customer::_register(NO.toLongLong(),pw);

        if(NO.toInt()<10000&&NO.toInt()>=5000)
            manager::_register(NO.toInt(),pw);

        if(NO.toInt()<5000&&NO.toInt()>=4000)
            admin::_register(NO.toInt(),pw);

        if(NO.toInt()<4000&&NO.toInt()>=3000)
            chef::_register(NO.toInt(),pw);

        if(NO.toInt()<3000&&NO.toInt()>=2000)
            waiter::_register(NO.toInt(),pw);

        QMessageBox::information(this, tr("Congratulations"),tr("Add Succeeded!"), QMessageBox::Ok);
    }

    ui->add_ac->clear();
    ui->add_key->clear();
}

void people_admin::on_del_2_clicked()
{
    QString NO=ui->del->text().trimmed();

    if(NO==""){
        QMessageBox::warning(this, tr("Warning"),tr("Delete Failed!"), QMessageBox::Ok); //输入为空时抛出异常
        return;
    }

    if(user::get_map().find(NO.toLongLong())==user::get_map().end())
        QMessageBox::warning(this, tr("Warning"),tr("该账户不存在!"), QMessageBox::Ok);//若不存在则抛出异常
    else{
        user::get_map().erase(user::get_map().find(NO.toLongLong()));
        QMessageBox::information(this, tr("Congratulations"),tr("Delete Succeeded!"), QMessageBox::Ok);
    }

    ui->del->clear();
}

void people_admin::on_change_clicked()
{
    QString NO=ui->change_ac->text().trimmed();
    QString pw=ui->change_key->text();

    if(NO==""||pw==""){
        QMessageBox::warning(this, tr("Warning"),tr("Change Failed!"), QMessageBox::Ok); //输入为空时抛出异常
        return;
    }

    if(user::get_map().find(NO.toLongLong())==user::get_map().end())
        QMessageBox::warning(this, tr("Warning"),tr("该账户不存在!"), QMessageBox::Ok);//若不存在则抛出异常
    else{
        if(NO.toLongLong()>10000)
            customer::_register(NO.toLongLong(),pw);

        if(NO.toInt()<10000&&NO.toInt()>=5000)
            manager::_register(NO.toInt(),pw);

        if(NO.toInt()<5000&&NO.toInt()>=4000)
            admin::_register(NO.toInt(),pw);

        if(NO.toInt()<4000&&NO.toInt()>=3000)
            chef::_register(NO.toInt(),pw);

        if(NO.toInt()<3000&&NO.toInt()>=2000)
            waiter::_register(NO.toInt(),pw);

        QMessageBox::information(this, tr("Congratulations"),tr("Change Succeeded!"), QMessageBox::Ok);
    }

    ui->change_ac->clear();
    ui->change_key->clear();
}

//查询顾客
void people_admin::on_cus_clicked()
{
    QList<long long>NO=user::get_map().keys();
    QTableWidget *dlg=new QTableWidget(0,2);

    dlg->setWindowTitle("顾客");
    dlg->setHorizontalHeaderItem(0,new QTableWidgetItem("手机号"));
    dlg->setHorizontalHeaderItem(1,new QTableWidgetItem("密码"));

    int row=0;
    for(int i=0;i<NO.size();i++){
        if(NO[i]<10000)continue ;
        dlg->insertRow(row);
        dlg->setItem(row,0,new QTableWidgetItem(QString::number(NO[i])));
        customer *cus=dynamic_cast<customer *>(user::get_map()[NO[i]]); //将user指针转化为customer指针
        dlg->setItem(row,1,new QTableWidgetItem(cus->get_password()));
        row++;
    }

    dlg->show();
    //mima bukejian
}

void people_admin::on_chef_clicked()
{
    QList<long long>NO=user::get_map().keys();
    QTableWidget *dlg=new QTableWidget(0,3);

    dlg->setWindowTitle("厨师");
    dlg->setHorizontalHeaderItem(0,new QTableWidgetItem("账号"));
    dlg->setHorizontalHeaderItem(1,new QTableWidgetItem("密码"));
    dlg->setHorizontalHeaderItem(2,new QTableWidgetItem("工作量"));

    int row=0;
    for(int i=0;i<NO.size();i++){
        if(NO[i]<3000||NO[i]>=4000)continue ;
        dlg->insertRow(row);
        dlg->setItem(row,0,new QTableWidgetItem(QString::number(NO[i])));
        chef *che=dynamic_cast<chef *>(user::get_map()[NO[i]]);
        dlg->setItem(row,1,new QTableWidgetItem(che->get_password()));
        dlg->setItem(row,2,new QTableWidgetItem(QString::number(che->get_dish_amount())));
        row++;
    }
    dlg->show();
}

void people_admin::on_waiter_clicked()
{
    QList<long long>NO=user::get_map().keys();
    QTableWidget *dlg=new QTableWidget(0,4);

    dlg->setWindowTitle("服务员");
    dlg->setHorizontalHeaderItem(0,new QTableWidgetItem("账号"));
    dlg->setHorizontalHeaderItem(1,new QTableWidgetItem("密码"));
    dlg->setHorizontalHeaderItem(2,new QTableWidgetItem("评分"));
    dlg->setHorizontalHeaderItem(3,new QTableWidgetItem("工作量"));

    int row=0;
    for(int i=0;i<NO.size();i++){
        if(NO[i]<2000||NO[i]>=3000)continue ;
        dlg->insertRow(row);
        dlg->setItem(row,0,new QTableWidgetItem(QString::number(NO[i])));
        waiter *wai=dynamic_cast<waiter *>(user::get_map()[NO[i]]);
        dlg->setItem(row,1,new QTableWidgetItem(wai->get_password()));
        dlg->setItem(row,2,new QTableWidgetItem(QString::number(wai->get_score().average())));
        dlg->setItem(row,3,new QTableWidgetItem(QString::number(wai->get_score().get_amount())));
        row++;
    }

    dlg->show();
}





