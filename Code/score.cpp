#include"score.h"

int score::average(){
    if(!amount)
        return 5;            //若还未评价，默认为5分
    else
        return (total/amount);
}

void score::add(int score){
    amount++;
    total+=score;
}

int score::get_amount(){
    return amount;
}

int score::get_total(){
    return total;
}
