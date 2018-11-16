#ifndef ADMIN_H
#define ADMIN_H
#include"user.h"
//管理员
class admin:public user{
public:
    admin(int get_NO,QString get_pw="123456"):user(get_NO,get_pw){}

};

#endif
