#include "ui_choose_dish.h"
#include "ui_ui_choose_dish.h"
#include"ui_customer.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include<QMessageBox>
#include"dish.h"
#include<QList>
#include <QDebug>
#include<QComboBox>
#include<QPushButton>
#include<QColor>
ui_choose_dish::ui_choose_dish(customer *cus,QWidget *parent) :
    logged(cus),
    QDialog(parent),
    ui(new Ui::ui_choose_dish)
{
    ui->setupUi(this);
    this->setWindowTitle("点菜");
    ui->label_3->setText("0");

    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); //按行选择
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);  //表格不可修改
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    QList<QString>dishname=dishtype::get_map().keys();
    for(int i=0;i<dishname.size();i++){
        QString name=dishtype::get_map()[dishname[i]]->get_name();
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(name));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(
                                     QString::number(dishtype::get_map()[dishname[i]]->
                                     get_price())));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(
                                     dishtype::get_map()[dishname[i]]->get_type()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(
                                     QString::number(dishtype::get_map()[dishname[i]]->
                                     get_score().average())));
    }

}

ui_choose_dish::~ui_choose_dish()
{
    delete ui;
}

void ui_choose_dish::on_pushButton_clicked()
{
    close();
}

//提交菜单
void ui_choose_dish::on_pushButton_2_clicked()
{
    if(logged->get_table()->get_waiter() == NULL){                             //若服务员为空，不可继续后续步骤
        QMessageBox::warning(this, tr("Warning"),tr("请您等待服务员下单"), QMessageBox::Ok);
        return;
    }
    int row_count = ui->tableWidget_2->rowCount();
    for(int i=0;i<row_count;i++){
        QComboBox *get_combo = reinterpret_cast< QComboBox *>(ui->tableWidget_2->cellWidget(i,1));
        logged->get_table()->add_dish(
                    ui->tableWidget_2->item(i,0)->text(),
                    get_combo->currentText().toInt()
                    );
        dishtype::get_map()[ui->tableWidget_2->item(i,0)->text()]
                ->ordered();
    }

    close();
    ui_customer *dlg=new ui_customer(logged);
    dlg->show();
}

//选择菜品
void ui_choose_dish::on_tableWidget_cellClicked(int row, int column)
{
    if(ui->tableWidget->item(row,0)->textColor()==QColor(255,0,0)){  //如果已选则不可再选
        return;
    }
    int row_count = ui->tableWidget_2->rowCount();
    ui->tableWidget_2->setRowCount(row_count+1);
    QString name=(ui->tableWidget->item(row,0)->text());
    ui->tableWidget_2->setItem(row_count,0,new QTableWidgetItem(name));

    QComboBox *combo = new QComboBox();                                //插入选择数量的的combobox
    QList<QString>number={"1","2","3","4","5","6","7","8","9","10"};
    combo->addItems(number);
    ui->tableWidget_2->setCellWidget(row_count,1,combo);

    QPushButton *pb=new QPushButton;
    pb->setText("删除");
    pbs.insert(row_count,pb);                                           //插入按钮数组
    ui->tableWidget_2->setCellWidget(row_count,2,pb);
    connect(pb, SIGNAL(clicked()), this, SLOT(rightClickedOperation()));
    ui->tableWidget->item(row,0)->setTextColor(QColor(255,0,0));        //如果已选就变为红色

}

//删除已点菜品
void ui_choose_dish::rightClickedOperation()
{
    auto Sender = qobject_cast<QPushButton*>(sender());//将信号发送者转变为按钮指针
    if(Sender)
    {
        int index=pbs.indexOf(Sender);                 //获取按钮数组中的序号
        QString name=ui->tableWidget_2->item(index,0)->text();
        QList<QString>dishname=dishtype::get_map().keys();
        ui->tableWidget->item(dishname.indexOf(name),0)
                ->setTextColor(QColor(0,0,0));//变回黑色
        ui->tableWidget_2->removeRow(index);
        pbs.remove(index);//在按钮数组中去掉该按钮
    }
}

//计算需付款
void ui_choose_dish::on_pushButton_4_clicked()
{
    int row_count = ui->tableWidget_2->rowCount();
    int total=0;
    for(int i=0;i<row_count;i++){
        QComboBox *get_combo= reinterpret_cast< QComboBox *>(ui->tableWidget_2->cellWidget(i,1));
        total+=get_combo->currentText().toInt()
                *
                dishtype::get_map()[ui->tableWidget_2->item(i,0)->text()]->get_price();

    }
    ui->label_3->setText(QString::number(total)+"元");
}
