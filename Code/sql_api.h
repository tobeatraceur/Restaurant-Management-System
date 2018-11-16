#ifndef SQL_API_H
#define SQL_API_H
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include<qstring.h>
#include<QDebug>
#include"user.h"
#include"login.h"
#include"dish.h"
#include<QList>
#include"mainwindow.h"

//数据库接口

class sql_api{
    static QSqlDatabase db;

    static void db_prepare();

public:

    static bool createConnection();

    static void save();

};





#endif // SQL_API_H
