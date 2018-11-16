#include"dish.h"
#include"table.h"

QHash<QString,dishtype *>dishtype::dishtype_map;
//

//
void dishtype::cooked(){
    for(int i=1;i<=5;i++){
        if(table::get_map()[i]->get_dish_map().contains(name)){
            QString NO=QString::number(
                        table::get_map()[i]->get_tableNO()
                        );
            table::get_map()[i]->get_waiter()->add_task(NO+name);           //向服务员的任务列表中添加上菜的任务
        }
    }
    status=3;
}
//
