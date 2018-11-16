#include "ui_choose_table.h"
#include "ui_ui_choose_table.h"
#include"ui_choose_dish.h"
#include<QMessageBox>
#include<QButtonGroup>
#include"table.h"
#include<QIcon>
ui_choose_table::ui_choose_table(customer * cus,QWidget *parent) :
    logged(cus),
    QDialog(parent),
    ui(new Ui::ui_choose_table)
{
    ui->setupUi(this);
    this->setWindowTitle("选桌");

    QButtonGroup *bg=new QButtonGroup;          //每次只可选一个
    bg->addButton(ui->checkBox_1,1);
    bg->addButton(ui->checkBox_2,2);
    bg->addButton(ui->checkBox_3,3);
    bg->addButton(ui->checkBox_4,4);
    bg->addButton(ui->checkBox_5,5);

    for(int i=1;i<=5;i++){
        if(table::get_map()[i]->get_status()!=0)
            bg->button(i)->setDisabled(true);   //若已经选则不可选
    }
}

ui_choose_table::~ui_choose_table()
{
    delete ui;
}

void ui_choose_table::on_pushButton_clicked()
{
    close();
}

void ui_choose_table::on_pushButton_2_clicked()
{

    if(ui->checkBox_1->isChecked())
        logged->get_table()=table::get_map()[1];
                                                //在用户指针中添加该桌子
    if(ui->checkBox_2->isChecked())
        logged->get_table()=table::get_map()[2];

    if(ui->checkBox_3->isChecked())
        logged->get_table()=table::get_map()[3];

    if(ui->checkBox_4->isChecked())
        logged->get_table()=table::get_map()[4];

    if(ui->checkBox_5->isChecked())
        logged->get_table()=table::get_map()[5];

    logged->get_table()->get_chosen();
    close();
    ui_choose_dish *dlg=new ui_choose_dish(logged);
    dlg->show();
}

//为所选桌添加图标
void ui_choose_table::on_checkBox_1_stateChanged(int arg1)
{
    if(arg1==2)
        ui->checkBox_1->setIcon(QIcon("icon.ico"));
    if(arg1==0)
         ui->checkBox_1->setIcon(QIcon());
}

void ui_choose_table::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1==2)
        ui->checkBox_2->setIcon(QIcon("icon.ico"));
    if(arg1==0)
         ui->checkBox_2->setIcon(QIcon());
}

void ui_choose_table::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1==2)
        ui->checkBox_3->setIcon(QIcon("icon.ico"));
    if(arg1==0)
         ui->checkBox_3->setIcon(QIcon());
}

void ui_choose_table::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1==2)
        ui->checkBox_4->setIcon(QIcon("icon.ico"));
    if(arg1==0)
         ui->checkBox_4->setIcon(QIcon());
}

void ui_choose_table::on_checkBox_5_stateChanged(int arg1)
{
    if(arg1==2)
        ui->checkBox_5->setIcon(QIcon("icon.ico"));
    if(arg1==0)
         ui->checkBox_5->setIcon(QIcon());
}
