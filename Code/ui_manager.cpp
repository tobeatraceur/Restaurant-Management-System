#include "ui_manager.h"
#include "ui_ui_manager.h"
#include"user.h"
#include"waiter.h"
#include"chef.h"
#include<QList>
#include"dish.h"
#include<QPieSeries>
#include<QtCharts>
//#include<QDialog>
//#include <QGraphicsScene>
//#include<QPieSlice>
//#include<QGraphicsView>
#include<QChartView>
#include <QLineSeries>
#include <QApplication>
#include<QDebug>
#include<QVector>
#include<QBarSeries>
#include<QBarSet>
ui_manager::ui_manager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_manager)
{
    ui->setupUi(this);
    this->setWindowTitle("经理");
    show_table();
}


ui_manager::~ui_manager()
{
    delete ui;
}

void ui_manager::on_pushButton_clicked()
{
    close();
}

void ui_manager::on_pushButton_2_clicked()
{
    show_table();
}

//显示表格
void ui_manager::show_table(){
    ui->tableWidget->setRowCount(0);
    ui->tableWidget_2->setRowCount(0);
    ui->tableWidget_3->setRowCount(0);
    QList<long long>NO=user::get_map().keys();
    QList<QString>name=dishtype::get_map().keys();
    int row_1=0,row_2=0,row_3=0;

    for(int i=0;i<NO.size();i++){

        if(NO[i]>=2000&&NO[i]<3000){
            ui->tableWidget_2->insertRow(row_2);
            ui->tableWidget_2->setItem(row_2,0,new QTableWidgetItem(QString::number(NO[i])));
            waiter *get_waiter=dynamic_cast<waiter *>(user::get_map()[NO[i]]);
            ui->tableWidget_2->setItem(row_2,1,new QTableWidgetItem(
                                           QString::number(get_waiter->get_score().average())));
            ui->tableWidget_2->setItem(row_2,2,new QTableWidgetItem(
                                           QString::number(get_waiter->get_score().get_amount())));
            row_2++;
        }

        if(NO[i]>=3000&&NO[i]<4000){
            ui->tableWidget->insertRow(row_1);
            ui->tableWidget->setItem(row_1,0,new QTableWidgetItem(
                                         QString::number(NO[i])));
            chef *get_chef=dynamic_cast<chef *>(user::get_map()[NO[i]]);
            ui->tableWidget->setItem(row_1,2,new QTableWidgetItem(
                                         QString::number(get_chef->get_dish_amount())));
            ui->tableWidget->setItem(row_1,1,new QTableWidgetItem(
                                         QString::number(get_chef->get_score().average())));
            row_1++;
        }
    }

    for(int i=0;i<name.size();i++){
        ui->tableWidget_3->insertRow(row_3);
        ui->tableWidget_3->setItem(row_3,0,new QTableWidgetItem(name[i]));
        ui->tableWidget_3->setItem(row_3,1,new QTableWidgetItem(
                                       QString::number(dishtype::get_map()[name[i]]->
                                       get_score().average())));
        row_3++;
    }
}

//查看菜品评分饼状图
void ui_manager::on_pushButton_3_clicked()
{
    using namespace QtCharts;

    QGraphicsScene * scene = new QGraphicsScene;
    QGraphicsView * view = new QGraphicsView(scene);
    view->setWindowTitle(" ");

    scene->setBackgroundBrush(QBrush(QColor(240, 240, 240)));
    view->setSceneRect(0, 0, 300, 300);

    QPieSeries *pieSeries = new QPieSeries();
    QPieSlice *pieSlice = new QPieSlice;
    pieSeries->append(pieSlice);
    QList<QString>name=dishtype::get_map().keys();
    QVector<double>score(6,0);

    for(int i=0;i<name.size();i++){
        score[dishtype::get_map()[name[i]]->get_score().average()]++;
    }

    for(int i=1;i<=5;i++){
        double percent=score[i]/name.size()*100;
        pieSeries->append(QString::number(i)+"分",percent);
    }

    QChart *pieChart = new QChart();
    pieChart->addSeries(pieSeries);
    pieChart->legend()->setAlignment(Qt::AlignRight);
    pieChart->setTitle("菜品评分比例图");
    pieChart->resize(300,300);

    scene->addItem(pieChart);
    view->show();
}

//显示厨师工作量条形图
void ui_manager::on_pushButton_5_clicked()
{
    using namespace QtCharts;

    QGraphicsScene * scene = new QGraphicsScene;
    QGraphicsView * view = new QGraphicsView(scene);
    view->setWindowTitle(" ");
    scene->setBackgroundBrush(QBrush(QColor(240, 240, 240)));
    view->setSceneRect(0, 0, 610, 300);

    QBarSeries *bar=new QBarSeries;
    QList<QBarSet *>sets;
    QList<long long>NO=chef::get_map().keys();

    for(int i=0;i<NO.size();i++){
        if(NO[i]>=3000&&NO[i]<4000){
            chef *get_chef=dynamic_cast<chef *>(chef::get_map()[NO[i]]);
            int work=get_chef->get_dish_amount();
            QBarSet *barset=new QBarSet(QString::number(NO[i]));
            barset->append(work);
            sets.append(barset);
        }
    }
    bar->append(sets);

    QChart *barChart = new QChart();
    barChart->addSeries(bar);
    barChart->legend()->setAlignment(Qt::AlignRight);
    barChart->setTitle("厨师工作量统计");
    barChart->resize(300,300);

    QPieSeries *pieSeries = new QPieSeries();
    QPieSlice *pieSlice = new QPieSlice;
    pieSeries->append(pieSlice);
    QList<long long>name=user::get_map().keys();
    QVector<double>score(6,0);

    for(int i=0;i<name.size();i++){
        if(NO[i]>=3000&&NO[i]<4000){
            chef *get_chef=dynamic_cast<chef *>(user::get_map()[NO[i]]);
            score[get_chef->get_score().average()]++;
        }
    }

    for(int i=1;i<=5;i++){
        double percent=score[i]/name.size()*100;
        pieSeries->append(QString::number(i)+"分",percent);
    }

    QChart *pieChart = new QChart();
    pieChart->addSeries(pieSeries);
    pieChart->legend()->setAlignment(Qt::AlignRight);
    pieChart->setTitle("厨师评分比例图");
    pieChart->resize(300,300);
    pieChart->setGeometry(320, 10, 300, 260);

    scene->addItem(barChart);
    scene->addItem(pieChart);
    view->show();
}

//显示服务员工作评价图
void ui_manager::on_pushButton_4_clicked()
{
    using namespace QtCharts;

    QGraphicsScene * scene = new QGraphicsScene;
    QGraphicsView * view = new QGraphicsView(scene);
    view->setWindowTitle(" ");
    scene->setBackgroundBrush(QBrush(QColor(240, 240, 240)));
    view->setSceneRect(0, 0, 610, 300);


    QBarSeries *bar=new QBarSeries;
    QList<QBarSet *>sets;
    QList<long long>NO=user::get_map().keys();

    for(int i=0;i<NO.size();i++){
        if(NO[i]>=2000&&NO[i]<3000){
            waiter *get_waiter=dynamic_cast<waiter *>(user::get_map()[NO[i]]);
            int work=get_waiter->get_score().get_amount();
            QBarSet *barset=new QBarSet(QString::number(NO[i]));
            barset->append(work);
            sets.append(barset);
        }
    }
    bar->append(sets);


    QPieSeries *pieSeries = new QPieSeries();
    QPieSlice *pieSlice = new QPieSlice;
    pieSeries->append(pieSlice);
    QList<long long>name=user::get_map().keys();
    QVector<double>score(6,0);

    for(int i=0;i<name.size();i++){
        if(NO[i]>=2000&&NO[i]<3000){
            waiter *get_waiter=dynamic_cast<waiter *>(user::get_map()[NO[i]]);
            score[get_waiter->get_score().average()]++;
        }
    }

    for(int i=1;i<=5;i++){
        double percent=score[i]/name.size()*100;
        pieSeries->append(QString::number(i)+"分",percent);
    }

    QChart *pieChart = new QChart();
    pieChart->addSeries(pieSeries);
    pieChart->legend()->setAlignment(Qt::AlignRight);
    pieChart->setTitle("服务员评分比例图");
    pieChart->resize(300,300);
    pieChart->setGeometry(320, 10, 300, 260);

    QChart *barChart = new QChart();
    barChart->addSeries(bar);
    barChart->legend()->setAlignment(Qt::AlignRight);
    barChart->setTitle("服务员工作量统计");
    barChart->resize(300,300);

    scene->addItem(pieChart);
    scene->addItem(barChart);

    view->show();
}
