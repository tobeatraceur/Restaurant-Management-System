#include "ui_waiter.h"
#include "ui_ui_waiter.h"
#include"table.h"
#include"dish.h"
#include<QList>
ui_waiter::ui_waiter(waiter *get_waiter, QWidget *parent) :
    logged(get_waiter),
    QDialog(parent),
    ui(new Ui::ui_waiter)
{
    ui->setupUi(this);
    this->setWindowTitle("服务员");

    show_table();
}

ui_waiter::~ui_waiter()
{
    delete ui;
}

void ui_waiter::on_pushButton_clicked()
{
    close();
}

//选桌
void ui_waiter::on_pushButton_2_clicked()
{
    table *this_table=table::get_map()[ui->comboBox->currentText().toInt()];
    this_table->get_waiter()=logged;
    this_table->get_service();
}

//刷新
void ui_waiter::on_pushButton_3_clicked()
{

    show_table();

}

//显示表格
void ui_waiter::show_table(){
    ui->comboBox->clear();                                   //显示需服务的桌号
    int amount=0;
    for(int i=1;i<=5;i++){
        if(table::get_map()[i]->get_status()==1){
            ui->comboBox->insertItem(i-1,QString::number(i));
            amount++;
        }
    }

    if(amount==0)ui->pushButton_2->setDisabled(true);        //若无新增顾客需服务，则选桌按钮不可用，以防程序崩溃
    else ui->pushButton_2->setEnabled(true);

    ui->tableWidget->setRowCount(logged->get_task().size()); //显示任务列表

    for(int i=0;i<logged->get_task().size();i++){
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(logged->get_task()[i]));
        QPushButton *pb=new QPushButton;
        pb->setText("完成");
        pbs.insert(i,pb);
        ui->tableWidget->setCellWidget(i,1,pb);
        connect(pb, SIGNAL(clicked()), this, SLOT(finished()));
    }
}

//完成任务
void ui_waiter::finished(){
    auto Sender = qobject_cast<QPushButton*>(sender());
    if(Sender)
    {
        int index=pbs.indexOf(Sender);
        QString task_finished=ui->tableWidget->item(index,0)->text().remove(0,1); //去掉任务前的桌号

        if(task_finished!="加水"&&task_finished!="催菜"&&task_finished!="结账"){    //上菜
            dishtype::get_map()[task_finished]->served();
        }

        logged->get_task().removeAll(ui->tableWidget->item(index,0)->text());
        ui->tableWidget->removeRow(index);
        pbs.remove(index);
    }
}
