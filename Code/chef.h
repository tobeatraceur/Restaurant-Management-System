#ifndef CHEF_H
#define CHEF_H
#include"user.h"
#include"score.h"

//厨师
class chef:public user{

    int dish_amount;  //工作量即做菜总数

    score chef_score;

public:

    chef(int get_NO,QString get_pw="123456"):
        user(get_NO,get_pw),
        dish_amount(0)
    {}    //默认密码为123456

    chef(int get_NO,QString get_pw,int amount,int total,int score_amount):
        user(get_NO,get_pw),
        dish_amount(amount),
        chef_score(score_amount,total)
    {}   //函数重载，用于从数据库读入数据

    static void _register(int get_NO,QString get_pw);   //注册

    static void _register(int get_NO, QString get_pw, int amount, int total, int score_amount);   //函数重载，用于从数据库读入数据

    int get_dish_amount();   //返回工作量

    score & get_score();

    void finish_dish(int amount);  //完成该种菜品，增加工作量
};

//内联函数提高效率

inline void chef::finish_dish(int amount){
    dish_amount+=amount;
}

inline void chef::_register(int get_NO,QString get_pw){
    map[get_NO]=new chef(get_NO,get_pw);
}

inline void chef::_register(int get_NO,QString get_pw,int amount,int total,int score_amount){
    map[get_NO]=new chef(get_NO,get_pw,amount,total,score_amount);
}

inline int chef::get_dish_amount(){
    return dish_amount;
}

inline score & chef::get_score(){
    return chef_score;
}
#endif
