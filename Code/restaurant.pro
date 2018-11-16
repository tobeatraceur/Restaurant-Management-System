#-------------------------------------------------
#
# Project created by QtCreator 2017-09-03T16:34:24
#
#-------------------------------------------------

QT       += core gui sql charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = restaurant
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    dish.cpp \
    table.cpp \
    register.cpp \
    ui_admin.cpp \
    login.cpp \
    user.cpp \
    ui_customer.cpp \
    ui_choose_table.cpp \
    ui_choose_dish.cpp \
    ui_chef.cpp \
    ui_save.cpp \
    ui_waiter.cpp \
    ui_score.cpp \
    ui_manager.cpp \
    sql_api.cpp \
    score.cpp \
    ui_dish_admin.cpp \
    ui_people_admin.cpp

HEADERS  += mainwindow.h \
    chef.h \
    customer.h \
    dish.h \
    manager.h \
    score.h \
    user.h \
    waiter.h \
    sql_api.h \
    admin.h \
    register.h \
    ui_admin.h \
    login.h \
    people_admin.h \
    dish_admin.h \
    ui_customer.h \
    table.h \
    ui_choose_table.h \
    ui_choose_dish.h \
    ui_chef.h \
    ui_save.h \
    ui_waiter.h \
    ui_score.h \
    ui_manager.h

FORMS    += mainwindow.ui \
    register.ui \
    ui_admin.ui \
    people_admin.ui \
    dish_admin.ui \
    ui_customer.ui \
    ui_choose_table.ui \
    ui_choose_dish.ui \
    ui_chef.ui \
    ui_save.ui \
    ui_waiter.ui \
    ui_score.ui \
    ui_manager.ui
RC_FILE += icon.rc

RESOURCES +=

