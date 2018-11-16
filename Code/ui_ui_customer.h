/********************************************************************************
** Form generated from reading UI file 'ui_customer.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_CUSTOMER_H
#define UI_UI_CUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_customer
{
public:
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTableWidget *tableWidget;

    void setupUi(QDialog *ui_customer)
    {
        if (ui_customer->objectName().isEmpty())
            ui_customer->setObjectName(QStringLiteral("ui_customer"));
        ui_customer->resize(400, 316);
        pushButton = new QPushButton(ui_customer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 280, 75, 23));
        verticalLayoutWidget = new QWidget(ui_customer);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 200, 311, 61));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_2->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout_2);

        tableWidget = new QTableWidget(ui_customer);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(90, 10, 231, 181));

        retranslateUi(ui_customer);

        QMetaObject::connectSlotsByName(ui_customer);
    } // setupUi

    void retranslateUi(QDialog *ui_customer)
    {
        ui_customer->setWindowTitle(QApplication::translate("ui_customer", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ui_customer", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ui_customer", "\346\237\245\347\234\213\351\244\220\346\241\214\346\203\205\345\206\265", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ui_customer", "\346\237\245\347\234\213\345\201\232\351\245\255\346\203\205\345\206\265", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("ui_customer", "\345\212\240\346\260\264", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("ui_customer", "\345\202\254\350\217\234", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("ui_customer", "\347\273\223\350\264\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ui_customer: public Ui_ui_customer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_CUSTOMER_H
