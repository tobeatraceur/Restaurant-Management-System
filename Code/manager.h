#ifndef MANAGER_H
#define MANAGER_H
#include"user.h"

class manager:public user{

public:

    manager(int get_NO,QString get_pw="123456"):user(get_NO,get_pw){}

};

#endif
