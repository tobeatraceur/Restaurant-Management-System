#include"table.h"
#include"dish.h"
QHash<int,table *>table::table_map;


void table::pay(){
    status=0;
    get_waiter()=NULL;                         //将服务员指针置为空
    QList<QString>dishes=get_dish_map().keys();

    for(int i=0;i<dishes.size();i++){
        dishtype::get_map()[dishes[i]]->pay();
    }
}

