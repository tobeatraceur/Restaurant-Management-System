/********************************************************************************
** Form generated from reading UI file 'dish_admin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISH_ADMIN_H
#define UI_DISH_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dish_admin
{
public:
    QPushButton *change;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_18;
    QLineEdit *add_ac_3;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_12;
    QLineEdit *add_key_3;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_19;
    QLineEdit *change_key_3;
    QLabel *label_6;
    QLabel *label_5;
    QPushButton *add;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_20;
    QLineEdit *del_3;
    QPushButton *del_4;
    QPushButton *pushButton;
    QLabel *label_4;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_22;
    QLineEdit *change_ac_3;
    QTableWidget *tableWidget;
    QComboBox *comboBox;
    QPushButton *pushButton_2;

    void setupUi(QDialog *dish_admin)
    {
        if (dish_admin->objectName().isEmpty())
            dish_admin->setObjectName(QStringLiteral("dish_admin"));
        dish_admin->resize(391, 454);
        change = new QPushButton(dish_admin);
        change->setObjectName(QStringLiteral("change"));
        change->setGeometry(QRect(300, 380, 75, 23));
        horizontalLayoutWidget_6 = new QWidget(dish_admin);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(60, 200, 221, 24));
        horizontalLayout_14 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(horizontalLayoutWidget_6);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_14->addWidget(label_18);

        add_ac_3 = new QLineEdit(horizontalLayoutWidget_6);
        add_ac_3->setObjectName(QStringLiteral("add_ac_3"));

        horizontalLayout_14->addWidget(add_ac_3);

        horizontalLayoutWidget_5 = new QWidget(dish_admin);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(60, 240, 221, 24));
        horizontalLayout_15 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(horizontalLayoutWidget_5);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_15->addWidget(label_12);

        add_key_3 = new QLineEdit(horizontalLayoutWidget_5);
        add_key_3->setObjectName(QStringLiteral("add_key_3"));
        add_key_3->setMaximumSize(QSize(141, 16777215));

        horizontalLayout_15->addWidget(add_key_3);

        horizontalLayoutWidget_4 = new QWidget(dish_admin);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(60, 380, 221, 24));
        horizontalLayout_16 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(horizontalLayoutWidget_4);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_16->addWidget(label_19);

        change_key_3 = new QLineEdit(horizontalLayoutWidget_4);
        change_key_3->setObjectName(QStringLiteral("change_key_3"));

        horizontalLayout_16->addWidget(change_key_3);

        label_6 = new QLabel(dish_admin);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 320, 54, 12));
        label_5 = new QLabel(dish_admin);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 270, 24, 12));
        add = new QPushButton(dish_admin);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(300, 240, 75, 23));
        horizontalLayoutWidget_7 = new QWidget(dish_admin);
        horizontalLayoutWidget_7->setObjectName(QStringLiteral("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(60, 290, 221, 24));
        horizontalLayout_17 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(horizontalLayoutWidget_7);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_17->addWidget(label_20);

        del_3 = new QLineEdit(horizontalLayoutWidget_7);
        del_3->setObjectName(QStringLiteral("del_3"));

        horizontalLayout_17->addWidget(del_3);

        del_4 = new QPushButton(dish_admin);
        del_4->setObjectName(QStringLiteral("del_4"));
        del_4->setGeometry(QRect(300, 290, 75, 23));
        pushButton = new QPushButton(dish_admin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 420, 75, 23));
        label_4 = new QLabel(dish_admin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 180, 41, 21));
        horizontalLayoutWidget_3 = new QWidget(dish_admin);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(60, 340, 221, 24));
        horizontalLayout_18 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(horizontalLayoutWidget_3);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_18->addWidget(label_22);

        change_ac_3 = new QLineEdit(horizontalLayoutWidget_3);
        change_ac_3->setObjectName(QStringLiteral("change_ac_3"));

        horizontalLayout_18->addWidget(change_ac_3);

        tableWidget = new QTableWidget(dish_admin);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 40, 311, 111));
        comboBox = new QComboBox(dish_admin);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 10, 72, 22));
        pushButton_2 = new QPushButton(dish_admin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 160, 80, 20));

        retranslateUi(dish_admin);

        QMetaObject::connectSlotsByName(dish_admin);
    } // setupUi

    void retranslateUi(QDialog *dish_admin)
    {
        dish_admin->setWindowTitle(QApplication::translate("dish_admin", "Dialog", Q_NULLPTR));
        change->setText(QApplication::translate("dish_admin", "\347\241\256\350\256\244", Q_NULLPTR));
        label_18->setText(QApplication::translate("dish_admin", "\350\217\234        \345\220\215", Q_NULLPTR));
        label_12->setText(QApplication::translate("dish_admin", "\344\273\267        \346\240\274", Q_NULLPTR));
        label_19->setText(QApplication::translate("dish_admin", "\344\273\267        \346\240\274", Q_NULLPTR));
        label_6->setText(QApplication::translate("dish_admin", "\344\277\256\346\224\271\344\273\267\346\240\274", Q_NULLPTR));
        label_5->setText(QApplication::translate("dish_admin", "\345\210\240\351\231\244", Q_NULLPTR));
        add->setText(QApplication::translate("dish_admin", "\347\241\256\350\256\244", Q_NULLPTR));
        label_20->setText(QApplication::translate("dish_admin", "\350\217\234        \345\220\215", Q_NULLPTR));
        del_4->setText(QApplication::translate("dish_admin", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton->setText(QApplication::translate("dish_admin", "\345\205\263\351\227\255", Q_NULLPTR));
        label_4->setText(QApplication::translate("dish_admin", "\345\242\236\345\212\240", Q_NULLPTR));
        label_22->setText(QApplication::translate("dish_admin", "\350\217\234        \345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("dish_admin", "\350\217\234\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("dish_admin", "\344\273\267\346\240\274", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("dish_admin", "\350\257\204\345\210\206", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("dish_admin", "\347\203\255\350\217\234", Q_NULLPTR)
         << QApplication::translate("dish_admin", "\345\207\211\350\217\234", Q_NULLPTR)
         << QApplication::translate("dish_admin", "\344\270\273\351\243\237", Q_NULLPTR)
         << QApplication::translate("dish_admin", "\347\202\271\345\277\203", Q_NULLPTR)
         << QApplication::translate("dish_admin", "\346\261\244", Q_NULLPTR)
        );
        pushButton_2->setText(QApplication::translate("dish_admin", "\345\210\267\346\226\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dish_admin: public Ui_dish_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISH_ADMIN_H
