#include<login.h>
#include<ui_admin.h>
#include"ui_choose_table.h"
#include"ui_waiter.h"
#include"ui_chef.h"
#include"ui_manager.h"
//登录
bool login(QString NO,QString pw){
    bool match=false;
    if(NO==NULL||pw==NULL)
        return false;
    typename QHash<long long,user *>::iterator iter=
            user::get_map().find(NO.toLongLong());
    if(iter==user::get_map().end())           //若不存在该用户返回false
        return false;
    else {
        if(pw==iter.value()->get_password())
            match=true;
        else return false;
    }

    //根据号段动态识别身份
    if(NO.toLongLong()>10000){

        ui_choose_table *dlg = new ui_choose_table(
                    dynamic_cast<customer *>(customer::get_map().find(NO.toLongLong()).value())
                    );//将该用户指针存入新界面中
        dlg->show();
    }
    if(NO.toInt()<10000&&NO.toInt()>=5000)
    {

        ui_manager *dlg = new ui_manager;
        dlg->show();
    }
    if(NO.toInt()<5000&&NO.toInt()>=4000){

        ui_admin *dlg = new ui_admin;
        dlg->show();

    }
    if(NO.toInt()<4000&&NO.toInt()>=3000) {

        ui_chef *dlg = new ui_chef(
                    dynamic_cast<chef *>(chef::get_map().find(NO.toInt()).value())
                    );
        dlg->show();
    }
    if(NO.toInt()<3000&&NO.toInt()>=2000){
        ui_waiter *dlg = new ui_waiter(
                    dynamic_cast<waiter *>(waiter::get_map().find(NO.toInt()).value())
                    );
        dlg->show();
    }
    return match;
}
