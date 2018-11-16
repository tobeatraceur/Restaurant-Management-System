#include "ui_customer.h"
#include "ui_ui_customer.h"
#include"ui_choose_table.h"
#include"table.h"
#include"dish.h"
#include<QList>
#include"ui_score.h"
#include<QMessageBox>
ui_customer::ui_customer(customer *cus,QWidget *parent) :
    logged(cus),
    QDialog(parent),
    ui(new Ui::ui_customer)
{
    ui->setupUi(this);
    this->setWindowTitle("欢迎光临");
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setRowCount(5);
    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("桌号"));  //显示桌子情况
    ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("使用情况"));
    QList<int>NO=table::get_map().keys();

    for(int i=1;i<=NO.size();i++){
        ui->tableWidget->setItem(i-1,0,new QTableWidgetItem(QString::number(i)));
        if((table::get_map()[i]->get_status())==0)
            ui->tableWidget->setItem(i-1,1,new QTableWidgetItem("空闲"));
        else
            ui->tableWidget->setItem(i-1,1,new QTableWidgetItem("繁忙"));
    }
}

ui_customer::~ui_customer()
{
    delete ui;
}

void ui_customer::on_pushButton_clicked()
{
    close();

}

//结账
void ui_customer::on_pushButton_5_clicked()
{

    QList<QString>dish=logged->get_table()->get_dish_map().keys();//等待所有菜都上菜后才可结账
    bool test=true;

    for(int i=0;i<dish.size();i++){
        if(dishtype::get_map()[dish[i]]->get_status()!=4){
            test=false;
            break;
        }
    }

    if(test){
        logged->get_table()->get_waiter()->add_task(
                    QString::number(logged->get_table()->get_tableNO())+"结账"
                    );                                                       //加入服务员任务列表
        close();
        ui_score *dlg=new ui_score(logged);
        dlg->show();
    }
    else
        QMessageBox::warning(this, tr("Warning"),tr("请您等待服务员上菜！"), QMessageBox::Ok);
}


//查询做菜情况
void ui_customer::on_pushButton_2_clicked()
{
    QList<QString>name=logged->get_table()->get_dish_map().keys();
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setRowCount(name.size());
    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("菜名"));
    ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("制作情况"));

    for(int i=0;i<name.size();i++){
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(name[i]));

        if(dishtype::get_map()[name[i]]->get_status()==1)
            ui->tableWidget->setItem(i,1,new QTableWidgetItem("待做"));

        if(dishtype::get_map()[name[i]]->get_status()==2)
            ui->tableWidget->setItem(i,1,new QTableWidgetItem("正做"));

        if(dishtype::get_map()[name[i]]->get_status()==3)
            ui->tableWidget->setItem(i,1,new QTableWidgetItem("待上菜"));

        if(dishtype::get_map()[name[i]]->get_status()==4)
            if(!logged->get_table()->get_waiter()->get_task().contains(
                        QString::number(logged->get_table()->get_tableNO())+name[i])
                    )
                ui->tableWidget->setItem(i,1,new QTableWidgetItem("已上菜"));
            else
                ui->tableWidget->setItem(i,1,new QTableWidgetItem("待上菜"));
    }
}

//加水
void ui_customer::on_pushButton_6_clicked()
{

    logged->get_table()->get_waiter()->add_task(
                QString::number(logged->get_table()->get_tableNO())+"加水");

}

//催菜
void ui_customer::on_pushButton_4_clicked()
{
    logged->get_table()->get_waiter()->add_task(
                QString::number(logged->get_table()->get_tableNO())+"催菜");
}

//查询桌子使用情况
void ui_customer::on_pushButton_3_clicked()
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setRowCount(5);
    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("桌号"));
    ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("使用情况"));
    QList<int>NO=table::get_map().keys();

    for(int i=1;i<=NO.size();i++){
        ui->tableWidget->setItem(i-1,0,new QTableWidgetItem(QString::number(i)));
        if((table::get_map()[i]->get_status())==0)
            ui->tableWidget->setItem(i-1,1,new QTableWidgetItem("空闲"));
        else
            ui->tableWidget->setItem(i-1,1,new QTableWidgetItem("繁忙"));
    }
}
