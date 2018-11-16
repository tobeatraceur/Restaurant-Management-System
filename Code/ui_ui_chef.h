/********************************************************************************
** Form generated from reading UI file 'ui_chef.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_CHEF_H
#define UI_UI_CHEF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_chef
{
public:
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ui_chef)
    {
        if (ui_chef->objectName().isEmpty())
            ui_chef->setObjectName(QStringLiteral("ui_chef"));
        ui_chef->resize(483, 300);
        pushButton = new QPushButton(ui_chef);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 260, 80, 20));
        tableWidget = new QTableWidget(ui_chef);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 40, 401, 192));
        pushButton_2 = new QPushButton(ui_chef);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 260, 80, 20));

        retranslateUi(ui_chef);

        QMetaObject::connectSlotsByName(ui_chef);
    } // setupUi

    void retranslateUi(QDialog *ui_chef)
    {
        ui_chef->setWindowTitle(QApplication::translate("ui_chef", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ui_chef", "\345\205\263\351\227\255", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ui_chef", "\345\276\205\345\201\232\350\217\234\345\223\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ui_chef", "\346\225\260\351\207\217", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ui_chef", "\345\274\200\345\247\213\345\210\266\344\275\234", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ui_chef", "\347\241\256\350\256\244\345\256\214\346\210\220", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ui_chef", "\345\210\267\346\226\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ui_chef: public Ui_ui_chef {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_CHEF_H
