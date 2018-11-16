#include "ui_score.h"
#include "ui_ui_score.h"
#include<QList>
#include"dish.h"
#include<QMessageBox>
ui_score::ui_score(customer *_logged,QWidget *parent) :
    logged(_logged),
    QDialog(parent),
    ui(new Ui::ui_score)
{
    ui->setupUi(this);
    this->setWindowTitle("评价");
    QList<QString>dishname=
            logged->get_table()->get_dish_map().keys();
    ui->tableWidget->setRowCount(dishname.size());

    for(int i=0;i<dishname.size();i++){                                 //显示评价列表
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(dishname[i]));
        QComboBox *combo = new QComboBox();
        combos.insert(i,combo);
        QList<QString>number={"5","4","3","2","1","0"};
        combo->addItems(number);
        ui->tableWidget->setCellWidget(i,1,combo);
    }
}

ui_score::~ui_score()
{
    delete ui;
}

//关闭窗口
void ui_score::on_pushButton_clicked()
{
    QList<QString>dishname=
            logged->get_table()->get_dish_map().keys();
    for(int i=0;i<dishname.size();i++){
        dishtype::get_map()[dishname[i]]->
                get_score().add(combos[i]->currentText().toInt());
        dishtype::get_map()[dishname[i]]->
                get_chef()->get_score().add(combos[i]->currentText().toInt());
    }

    logged->get_table()->get_waiter()->get_score().add(ui->comboBox->currentText().toInt());
    logged->get_table()->pay();

    close();
    QMessageBox::information(this, tr("欢迎下次光临"),tr("欢迎下次光临"), QMessageBox::Ok);
}
