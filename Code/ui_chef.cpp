#include "ui_chef.h"
#include "ui_ui_chef.h"
#include"table.h"
#include<QList>
#include<QPushButton>
#include<QTableWidgetItem>
#include<QTableWidget>
#include<QDebug>
#include"dish.h"
#include<QHash>

ui_chef::ui_chef(chef *_logged, QWidget *parent) :
    logged(_logged),
    QDialog(parent),
    ui(new Ui::ui_chef)
{
    ui->setupUi(this);
    this->setWindowTitle("厨师");
    table_show();
}

ui_chef::~ui_chef()
{
    delete ui;
}

void ui_chef::on_pushButton_clicked()
{
    close();
}

void ui_chef::on_pushButton_2_clicked()
{
    table_show();
}

//显示需做表格
void ui_chef::table_show()
{
    to_be_cooked.clear();

    for(int i=1;i<=5;i++){
        QList<QString>dish_name=table::get_map()[i]
                ->get_dish_map().keys();
        int dish_amount=dish_name.size();
        for(int j=0;j<dish_amount;j++){                             //获取目前所有需做的菜
            if(dishtype::get_map()[dish_name[j]]->get_status()==1){
                if(to_be_cooked.contains(dish_name[j])){     //若需做菜列表中已经有该菜，则其中需做数量更新
                    to_be_cooked[dish_name[j]]+=
                            table::get_map()[i]->
                            get_dish_map()[dish_name[j]];
                }
                else{
                    to_be_cooked[dish_name[j]]=
                            table::get_map()[i]->
                            get_dish_map()[dish_name[j]];
                }
            }
        }
    }
    QList<QString>dish_name1=to_be_cooked.keys();
    int dish_amount=dish_name1.size();
    ui->tableWidget->setRowCount(dish_amount);

    for(int j=0;j<dish_amount;j++){
        ui->tableWidget->setItem(j,0,new QTableWidgetItem(dish_name1[j]));
        ui->tableWidget->setItem(j,1,new QTableWidgetItem(
                                     QString::number(to_be_cooked[dish_name1[j]])
                                 )
                );

        QPushButton *pb1=new QPushButton;
        pb1->setText("开始");
        pbs_begin.insert(j,pb1);
        ui->tableWidget->setCellWidget(j,2,pb1);
        connect(pb1, SIGNAL(clicked()), this, SLOT(begin()));

        QPushButton *pb=new QPushButton;
        pb->setText("完成");
        pbs_end.insert(j,pb);
        ui->tableWidget->setCellWidget(j,3,pb);
        pb->setDisabled(true);
        connect(pb, SIGNAL(clicked()), this, SLOT(finished()));
        connect(pb1, &QPushButton::clicked, [=] ()             //只有在按下“开始”键后才可以按“完成”键
        {
            pb->setEnabled(true);
        });
    }
    if(ui->tableWidget->rowCount()!=0)
        ui->pushButton_2->setDisabled(true);//只有完成了当前列表中的所有任务才能刷新列表

}

//完成该菜制作
void ui_chef::finished(){
    auto Sender = qobject_cast<QPushButton*>(sender());
    if(Sender)
    {
        int index=pbs_end.indexOf(Sender);

        logged->finish_dish(
                    to_be_cooked[ui->tableWidget->item(index,0)->text()]);
        dishtype::get_map()[ui->tableWidget->item(index,0)->text()]
                ->cooked();
        dishtype::get_map()[ui->tableWidget->item(index,0)->text()]
                ->get_chef()=logged;

        pbs_end.remove(index);
        pbs_begin.remove(index);
        ui->tableWidget->removeRow(index);

        if(ui->tableWidget->rowCount()==0)
            ui->pushButton_2->setEnabled(true);  //此时可以刷新
    }
}

//开始该菜制作
void ui_chef::begin(){
    auto Sender = qobject_cast<QPushButton*>(sender());
    if(Sender)
    {
        int index=pbs_begin.indexOf(Sender);
        dishtype::get_map()[ui->tableWidget->item(index,0)->text()]
                ->cooking();
        pbs_begin[index]->setDisabled(true);//之后“开始”键不可按
    }
}

