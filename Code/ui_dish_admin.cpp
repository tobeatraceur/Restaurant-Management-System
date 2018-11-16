#include "dish_admin.h"
#include "ui_dish_admin.h"
#include"dish.h"
#include<QMessageBox>
#include<QList>
dish_admin::dish_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dish_admin)
{
    ui->setupUi(this);
    this->setWindowTitle("菜品管理");
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//表格不可编辑
    show_table();
}

dish_admin::~dish_admin()
{
    delete ui;
}

void dish_admin::on_pushButton_clicked()
{
    close();
}

//增加
void dish_admin::on_add_clicked()
{
    QString name=ui->add_ac_3->text().trimmed();
    QString price=ui->add_key_3->text();

    if(name==""||price==""){                                                         //输入为空时抛出异常
        QMessageBox::warning(this, tr("Warning"),tr("Add Failed!"), QMessageBox::Ok);
        return;
    }

    if(dishtype::get_map().find(name)!=dishtype::get_map().end())                    //若已经存在则抛出异常
        QMessageBox::warning(this, tr("Warning"),tr("该菜已存在!"), QMessageBox::Ok);
    else{
        dishtype::add(name,price.toInt(),ui->comboBox->currentText());
        QMessageBox::information(this, tr("Congratulations"),tr("Add Succeeded!"), QMessageBox::Ok);

    }
    ui->add_ac_3->clear();
    ui->add_key_3->clear();
}

//删除
void dish_admin::on_del_4_clicked()
{
    QString name=ui->del_3->text().trimmed();
    if(name==""){                                                                       //输入为空时抛出异常
        QMessageBox::warning(this, tr("Warning"),tr("Delete Failed!"), QMessageBox::Ok);
        return;
    }
    if(dishtype::get_map().find(name)==dishtype::get_map().end()
            ||
            dishtype::get_map()[name]->get_type()!=ui->comboBox->currentText()) //若不存在或不属于该类菜则抛出异常
        QMessageBox::warning(this, tr("Warning"),tr("该菜不存在!"), QMessageBox::Ok);
    else{
        dishtype::get_map().find(name).value()->~dishtype();
        dishtype::get_map().erase(dishtype::get_map().find(name));
        QMessageBox::information(this, tr("Congratulations"),tr("Delete Succeeded!"), QMessageBox::Ok);
    }
    ui->del_3->clear();
}

//更改
void dish_admin::on_change_clicked()
{
    QString name=ui->change_ac_3->text().trimmed();
    QString pr=ui->change_key_3->text();
    if(name==""||pr==""){                                                               //输入为空时抛出异常
        QMessageBox::warning(this, tr("Warning"),tr("Change Failed!"), QMessageBox::Ok);
        return;
    }
    if(dishtype::get_map().find(name)==dishtype::get_map().end()
            ||
            dishtype::get_map()[name]->get_type()!=ui->comboBox->currentText()) //若不存在或不属于该类菜则抛出异常
        QMessageBox::warning(this, tr("Warning"),tr("该菜不存在!"), QMessageBox::Ok);
    else{
        dishtype::get_map().find(name).value()->change_price(pr.toInt());
        QMessageBox::information(this, tr("Congratulations"),tr("Change Succeeded!"), QMessageBox::Ok);
    }
    ui->change_ac_3->clear();
    ui->change_key_3->clear();
}

void dish_admin::on_pushButton_2_clicked()
{
    show_table();
}

//显示表格
void dish_admin::show_table()
{
    ui->tableWidget->setRowCount(0);
    QList<QString>name=dishtype::get_map().keys();
    int row=0;
    for(int i=0;i<name.size();i++){
        if(dishtype::get_map()[name[i]]->get_type()==ui->comboBox->currentText()){   //找出符合该类的菜品
            ui->tableWidget->insertRow(row);
            ui->tableWidget->setItem(row,0,new QTableWidgetItem(name[i]));
            ui->tableWidget->setItem(row,1,new QTableWidgetItem(
                                         QString::number(
                                             dishtype::get_map()[name[i]]->get_price())
                                     )
                    );
            ui->tableWidget->setItem(row,2,new QTableWidgetItem(
                                         QString::number(
                                             dishtype::get_map()[name[i]]->get_score().average())
                                     )
                    );
            row++;
        }
    }
}

void dish_admin::on_comboBox_currentTextChanged(const QString &arg1)
{
    show_table();
}
