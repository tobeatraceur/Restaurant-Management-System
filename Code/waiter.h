#ifndef WAITER_H
#define WAITER_H
#include"user.h"
#include"score.h"
#include<QList>
class waiter: public user{

    score waiterscore;    //用类封装评分

    QList<QString>task;   //用list存储服务员的任务列表

public:
    waiter(int get_NO,QString get_pw="123456"):user(get_NO,get_pw){}                                           //默认密码123456

    waiter(int get_NO,QString get_pw,int _amount,int _total ):
        user(get_NO,get_pw),
        waiterscore(_amount,_total)
    {}//重载用于数据库读入

    static void _register(int get_NO,QString get_pw);

    static void _register(int get_NO,QString get_pw,int _amount,int _total);                                   //重载用于数据库读入   

    score & get_score();

    QList<QString> &get_task();

    void add_task(QString _task);     //增加任务

    void pay();                       //结账
};

//内联函数提高效率

inline void waiter::pay(){
    waiterscore.amount++;
}

inline void waiter::add_task(QString _task){
    task.append(_task);
}

inline void waiter::_register(int get_NO,QString get_pw){
    map[get_NO]=new waiter(get_NO,get_pw);
}

inline  void waiter::_register(int get_NO,QString get_pw,int _amount,int _total){
    map[get_NO]=new waiter(get_NO,get_pw,_amount,_total);
}

inline score & waiter::get_score(){
    return waiterscore;
}

inline QList<QString> & waiter::get_task(){
    return task;
}

#endif
