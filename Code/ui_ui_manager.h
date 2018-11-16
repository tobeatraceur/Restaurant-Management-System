/********************************************************************************
** Form generated from reading UI file 'ui_manager.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_MANAGER_H
#define UI_UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_manager
{
public:
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tableWidget_3;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *ui_manager)
    {
        if (ui_manager->objectName().isEmpty())
            ui_manager->setObjectName(QStringLiteral("ui_manager"));
        ui_manager->resize(913, 329);
        pushButton = new QPushButton(ui_manager);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(560, 290, 80, 20));
        tableWidget = new QTableWidget(ui_manager);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 30, 311, 192));
        tableWidget_2 = new QTableWidget(ui_manager);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(350, 30, 311, 192));
        label = new QLabel(ui_manager);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 54, 12));
        label_2 = new QLabel(ui_manager);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 10, 54, 12));
        tableWidget_3 = new QTableWidget(ui_manager);
        if (tableWidget_3->columnCount() < 2)
            tableWidget_3->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(680, 30, 211, 192));
        label_3 = new QLabel(ui_manager);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(680, 10, 54, 12));
        pushButton_2 = new QPushButton(ui_manager);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 290, 80, 20));
        pushButton_3 = new QPushButton(ui_manager);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(750, 230, 80, 20));
        pushButton_4 = new QPushButton(ui_manager);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(460, 230, 80, 20));
        pushButton_5 = new QPushButton(ui_manager);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(130, 230, 80, 20));

        retranslateUi(ui_manager);

        QMetaObject::connectSlotsByName(ui_manager);
    } // setupUi

    void retranslateUi(QDialog *ui_manager)
    {
        ui_manager->setWindowTitle(QApplication::translate("ui_manager", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ui_manager", "\345\205\263\351\227\255", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ui_manager", "\350\264\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ui_manager", "\350\257\204\345\210\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ui_manager", "\345\267\245\344\275\234\351\207\217", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("ui_manager", "\350\264\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("ui_manager", "\350\257\204\345\210\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("ui_manager", "\345\267\245\344\275\234\351\207\217", Q_NULLPTR));
        label->setText(QApplication::translate("ui_manager", "\345\216\250\345\270\210", Q_NULLPTR));
        label_2->setText(QApplication::translate("ui_manager", "\346\234\215\345\212\241\345\221\230", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("ui_manager", "\350\217\234\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("ui_manager", "\345\276\227\345\210\206", Q_NULLPTR));
        label_3->setText(QApplication::translate("ui_manager", "\350\217\234\345\223\201", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ui_manager", "\345\210\267\346\226\260", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ui_manager", "\346\237\245\347\234\213\345\233\276\350\241\250", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("ui_manager", "\346\237\245\347\234\213\345\233\276\350\241\250", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("ui_manager", "\346\237\245\347\234\213\345\233\276\350\241\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ui_manager: public Ui_ui_manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_MANAGER_H
