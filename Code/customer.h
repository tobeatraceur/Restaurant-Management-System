#ifndef CUSTOMER_H
#define CUSTOMER_H
#include"user.h"
#include"table.h"
//顾客
class customer:public user{

    table *mytable;   //以指针形式储存顾客所选桌子

public:

    customer(long long get_phone,QString pw):user(get_phone,pw){}

    static void _register(long long get_phone,QString get_pw);   //注册

    table *& get_table();   //返回顾客所选桌子的指针
};

//内联函数提高效率

inline void customer::_register(long long get_phone,QString get_pw){
    map[get_phone]=new customer(get_phone,get_pw);
}

inline table *& customer::get_table(){
    return mytable;
}

#endif
