#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"register.h"
#include<QTableView>
#include<QSqlQuery>
#include<QMessageBox>
#include"sql_api.h"
#include<QSqlTableModel>
#include"login.h"
#include"table.h"
#include"ui_save.h"
#include"dish.h"
#include<QCloseEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);//去掉边框
//    admin::get_map()[4000]=new admin(4000);
//    manager::get_map()[5000]=new manager(5000);
//    chef::get_map()[3000]=new chef(3000);
//    customer::get_map()[123456]=new customer(123456,"123456");
//    customer::get_map()[1234567]=new customer(1234567,"1234567");
//    waiter::get_map()[2000]=new waiter(2000);
//    dishtype::get_map()["红烧猪蹄"]=new dishtype("红烧猪蹄",10000,"热菜");
//    dishtype::get_map()["宫保鸡丁"]=new dishtype("宫保鸡丁",999999,"热菜");
//    dishtype::get_map()["米饭"]=new dishtype("米饭",999999,"主食");
    for(int i=1;i<6;i++)                          //初始化桌子
        table::add(i);
    ui->pushButton_7->setShortcut(Qt::Key_Return);//使回车可以登录
}

MainWindow::~MainWindow()
{
    delete ui;
}

//登录
void MainWindow::on_pushButton_7_clicked()
{
    QString NO=ui->accountEdit_2->text();
    QString pw=ui->keyEdit_2->text();

    if(!login(NO,pw))
        QMessageBox::warning(this, tr("Warning"),tr("Login Failed!"), QMessageBox::Ok);//登录失败
    else{
        ui->accountEdit_2->clear();
        ui->keyEdit_2->clear();
    }
}

//注册
void MainWindow::on_pushButton_5_clicked()
{
    Register *dlg = new Register(this);
    dlg->show();
    dlg->setWindowTitle("注册");
}

//关闭时询问是否保存
void MainWindow::on_pushButton_8_clicked()
{

    ui_save *dlg=new ui_save(this);
    dlg->show();

}



