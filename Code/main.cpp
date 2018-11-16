#include "mainwindow.h"
#include <QApplication>
#include<QFile>
#include<QColor>
#include<QString>
#include<QLatin1String>
#include<QPalette>
#include"sql_api.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file("blue.css");                       //设置皮肤
    file.open(QFile::ReadOnly);
    QString qss = QLatin1String(file.readAll());
    qApp->setStyleSheet(qss);
    qApp->setPalette(QPalette(QColor("#F0F0F0")));

   if(!sql_api::createConnection())    //打开数据库并读入数据
       return 1;

    MainWindow w;
    w.setWindowTitle("登录");
    w.show();
    return a.exec();
}

















