#include "ui_admin.h"
#include "ui_ui_admin.h"
#include"people_admin.h"
#include"dish_admin.h"
ui_admin::ui_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_admin)
{
    ui->setupUi(this);
    this->setWindowTitle("管理员");
}

ui_admin::~ui_admin()
{
    delete ui;
}

void ui_admin::on_pushButton_6_clicked()
{
    this->close();
}

void ui_admin::on_pushButton_4_clicked()
{
    people_admin *dlg=new people_admin;
    dlg->setWindowTitle("账户管理");
    dlg->show();
}

void ui_admin::on_pushButton_clicked()
{
    dish_admin *dlg=new dish_admin;
    dlg->setWindowTitle("菜单管理");
    dlg->show();
}
