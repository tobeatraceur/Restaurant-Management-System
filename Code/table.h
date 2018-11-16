#ifndef TABLE_H
#define TABLE_H
#include<QVector>
#include<QHash>
#include<QString>
#include"waiter.h"
class table{

    int tableNO;                           //桌号

    waiter *this_waiter;                   //存储为该桌服务的服务员指针

    static QHash<int,table *>table_map;    //用静态成员哈希表存储所有桌子

    QHash<QString,int>dish_map;            //用哈希表存储该桌所点菜及数量

    int status;                            //0：空闲，1：有顾客，2：有服务员

public:

    table(int get_NO):
        tableNO(get_NO),
        status(0),
        this_waiter(NULL)
    {}

    static QHash<int,table *> &get_map();

    static void add(int get_NO);             //增加桌子

    void add_dish(QString name,int amount);  //点菜

    QHash<QString,int> &get_dish_map();

    int get_tableNO();

    int get_status();

    waiter *&get_waiter();

    void get_chosen();        //被选中

    void get_service();       //服务员开始服务

    void pay();               //结账
};

//内联函数提高效率

inline QHash<int,table *> & table::get_map(){
    return table_map;
}

inline void table::add(int get_NO){
    table_map[get_NO]=new table(get_NO);
}

inline void table::add_dish(QString name,int amount){
    dish_map[name]=amount;
}

inline QHash<QString,int> & table::get_dish_map(){
    return dish_map;
}

inline int table::get_tableNO(){
    return tableNO;
}

inline int table::get_status(){
    return status;
}

inline waiter *& table::get_waiter(){
    return this_waiter;
}

inline void table::get_chosen(){
    status=1;
}

inline void table::get_service(){
    status=2;
}
#endif
