#include "register.h"
#include "ui_register.h"
#include<QString>
#include<QMessageBox>
#include<QDebug>
#include<QSqlQueryModel>
#include"sql_api.h"
#include"customer.h"
#include"user.h"
#include<QTimer>
#include<cstdlib>

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    this->setWindowTitle("注册");
    qt=new QTimer;

}

Register::~Register()
{
    delete ui;
}

void Register::accepted()
{

}

void Register::on_pushButton_clicked()
{
    QString phone=ui->lineEdit_2->text().trimmed();

    if(phone.toLongLong()<10000){
        QMessageBox::warning(this, tr("Warning"),tr("请输入正确手机号!"), QMessageBox::Ok);
        return;
    }

    QString pw1=ui->lineEdit->text();
    QString pw=ui->lineEdit_3->text();
    if(ui->lineEdit_4->text()!=ui->label_5->text()){
        QMessageBox::warning(this, tr("Warning"),tr("验证码错误!"), QMessageBox::Ok);
        return;
    }
    if(phone==""||pw==""||pw1==""||pw!=pw1){
        QMessageBox::warning(this, tr("Warning"),tr("Register Failed!"), QMessageBox::Ok);
        return;
    }
    if(user::get_map().find(phone.toLongLong())!=user::get_map().end())
        QMessageBox::warning(this, tr("Warning"),tr("该账户已存在!"), QMessageBox::Ok);
    else {
        customer::_register(phone.toLongLong(),pw);
        QMessageBox::information(this, tr("Congratulations"),tr("Register Succeeded!"), QMessageBox::Ok);
        this->close();
    }

    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->label_5->clear();
}

//生成验证码
void Register::on_pushButton_3_clicked()
{
    int number;
    while(number<1000||number>9999)number=qrand();
    ui->label_5->setText(QString::number(number));
    qt->start(1000);
    connect(qt,&QTimer::timeout,this,&Register::time);
    ui->pushButton_3->setDisabled(true);

}

//获取验证码的60s倒计时
void Register::time(){
    if(now!=0){
        ui->pushButton_3->setText("获取验证码("+QString::number(now)+")");
        now--;
    }
    if(now==0){
        ui->pushButton_3->setEnabled(true);
        ui->pushButton_3->setText("获取验证码");
        now=60;
        qt->stop();
    }
}
