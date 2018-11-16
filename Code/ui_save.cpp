#include "ui_save.h"
#include "ui_ui_save.h"
#include"sql_api.h"

ui_save::ui_save(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_save)
{
    ui->setupUi(this);
    this->setWindowTitle("保存");
}

ui_save::~ui_save()
{
    delete ui;
}

//不保存
bool ui_save::on_pushButton_2_clicked()
{
    close();
    parentWidget()->close();           //同时关闭母窗口
    return true;
}

//保存
bool ui_save::on_pushButton_clicked()
{
    sql_api::save();
    close();
    parentWidget()->close();
    return true;
}
