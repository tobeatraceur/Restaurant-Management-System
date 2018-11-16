/********************************************************************************
** Form generated from reading UI file 'ui_waiter.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_WAITER_H
#define UI_UI_WAITER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_waiter
{
public:
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton_3;

    void setupUi(QDialog *ui_waiter)
    {
        if (ui_waiter->objectName().isEmpty())
            ui_waiter->setObjectName(QStringLiteral("ui_waiter"));
        ui_waiter->resize(400, 300);
        pushButton = new QPushButton(ui_waiter);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 260, 75, 23));
        horizontalLayoutWidget = new QWidget(ui_waiter);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 20, 251, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        tableWidget = new QTableWidget(ui_waiter);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(100, 60, 211, 192));
        pushButton_3 = new QPushButton(ui_waiter);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 260, 80, 20));

        retranslateUi(ui_waiter);

        QMetaObject::connectSlotsByName(ui_waiter);
    } // setupUi

    void retranslateUi(QDialog *ui_waiter)
    {
        ui_waiter->setWindowTitle(QApplication::translate("ui_waiter", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ui_waiter", "\345\205\263\351\227\255", Q_NULLPTR));
        label->setText(QApplication::translate("ui_waiter", "\351\200\211 \346\213\251 \351\244\220 \346\241\214", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ui_waiter", "\347\241\256\350\256\244", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ui_waiter", "\345\276\205\345\201\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ui_waiter", "\345\256\214\346\210\220", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ui_waiter", "\345\210\267\346\226\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ui_waiter: public Ui_ui_waiter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_WAITER_H
