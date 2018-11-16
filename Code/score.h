#ifndef SCORE_H
#define SCORE_H
class score{
    int amount;    //被点评次数

    int total;     //被点评总分

    friend class dish;    //运用友元，方便读取数据

    friend class waiter;

    friend class chef;

public:

    int average();    //返回平均评分

    score():amount(0),total(0){}

    score(int _amount,int _total):
        amount(_amount),
        total(_total)
    {}    //重载用于从数据库读入

    void add(int score);    //点评

    int get_amount();

    int get_total();

};
#endif
