/********************************************************************************
** Form generated from reading UI file 'people_admin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEOPLE_ADMIN_H
#define UI_PEOPLE_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_people_admin
{
public:
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *change_ac;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *change_key;
    QLabel *label_9;
    QPushButton *add;
    QPushButton *del_2;
    QPushButton *change;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QLineEdit *add_ac;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QLineEdit *del;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QLineEdit *add_key;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *cus;
    QPushButton *chef;
    QPushButton *waiter;

    void setupUi(QDialog *people_admin)
    {
        if (people_admin->objectName().isEmpty())
            people_admin->setObjectName(QStringLiteral("people_admin"));
        people_admin->resize(395, 374);
        pushButton = new QPushButton(people_admin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 330, 75, 23));
        label_4 = new QLabel(people_admin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 41, 21));
        label_5 = new QLabel(people_admin);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 100, 24, 12));
        label_6 = new QLabel(people_admin);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 150, 54, 12));
        horizontalLayoutWidget_3 = new QWidget(people_admin);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(50, 170, 221, 24));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        change_ac = new QLineEdit(horizontalLayoutWidget_3);
        change_ac->setObjectName(QStringLiteral("change_ac"));

        horizontalLayout_4->addWidget(change_ac);

        horizontalLayoutWidget_4 = new QWidget(people_admin);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(50, 210, 221, 24));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(horizontalLayoutWidget_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_5->addWidget(label_8);

        change_key = new QLineEdit(horizontalLayoutWidget_4);
        change_key->setObjectName(QStringLiteral("change_key"));

        horizontalLayout_5->addWidget(change_key);

        label_9 = new QLabel(people_admin);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 250, 54, 12));
        add = new QPushButton(people_admin);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(290, 70, 75, 23));
        del_2 = new QPushButton(people_admin);
        del_2->setObjectName(QStringLiteral("del_2"));
        del_2->setGeometry(QRect(290, 120, 75, 23));
        change = new QPushButton(people_admin);
        change->setObjectName(QStringLiteral("change"));
        change->setGeometry(QRect(290, 210, 75, 23));
        horizontalLayoutWidget_6 = new QWidget(people_admin);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(50, 30, 221, 24));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(horizontalLayoutWidget_6);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_7->addWidget(label_13);

        add_ac = new QLineEdit(horizontalLayoutWidget_6);
        add_ac->setObjectName(QStringLiteral("add_ac"));

        horizontalLayout_7->addWidget(add_ac);

        horizontalLayoutWidget_7 = new QWidget(people_admin);
        horizontalLayoutWidget_7->setObjectName(QStringLiteral("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(50, 120, 221, 24));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(horizontalLayoutWidget_7);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_8->addWidget(label_15);

        del = new QLineEdit(horizontalLayoutWidget_7);
        del->setObjectName(QStringLiteral("del"));

        horizontalLayout_8->addWidget(del);

        horizontalLayoutWidget_5 = new QWidget(people_admin);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(50, 70, 221, 24));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(horizontalLayoutWidget_5);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_6->addWidget(label_10);

        add_key = new QLineEdit(horizontalLayoutWidget_5);
        add_key->setObjectName(QStringLiteral("add_key"));
        add_key->setMaximumSize(QSize(141, 16777215));

        horizontalLayout_6->addWidget(add_key);

        horizontalLayoutWidget = new QWidget(people_admin);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 270, 311, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cus = new QPushButton(horizontalLayoutWidget);
        cus->setObjectName(QStringLiteral("cus"));

        horizontalLayout->addWidget(cus);

        chef = new QPushButton(horizontalLayoutWidget);
        chef->setObjectName(QStringLiteral("chef"));

        horizontalLayout->addWidget(chef);

        waiter = new QPushButton(horizontalLayoutWidget);
        waiter->setObjectName(QStringLiteral("waiter"));

        horizontalLayout->addWidget(waiter);


        retranslateUi(people_admin);

        QMetaObject::connectSlotsByName(people_admin);
    } // setupUi

    void retranslateUi(QDialog *people_admin)
    {
        people_admin->setWindowTitle(QApplication::translate("people_admin", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("people_admin", "\345\205\263\351\227\255", Q_NULLPTR));
        label_4->setText(QApplication::translate("people_admin", "\345\242\236\345\212\240", Q_NULLPTR));
        label_5->setText(QApplication::translate("people_admin", "\345\210\240\351\231\244", Q_NULLPTR));
        label_6->setText(QApplication::translate("people_admin", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        label_7->setText(QApplication::translate("people_admin", "\350\246\201\344\277\256\346\224\271\347\232\204\347\224\250\346\210\267", Q_NULLPTR));
        label_8->setText(QApplication::translate("people_admin", "\346\226\260   \345\257\206   \347\240\201", Q_NULLPTR));
        label_9->setText(QApplication::translate("people_admin", "\346\237\245\350\257\242", Q_NULLPTR));
        add->setText(QApplication::translate("people_admin", "\347\241\256\350\256\244", Q_NULLPTR));
        del_2->setText(QApplication::translate("people_admin", "\347\241\256\350\256\244", Q_NULLPTR));
        change->setText(QApplication::translate("people_admin", "\347\241\256\350\256\244", Q_NULLPTR));
        label_13->setText(QApplication::translate("people_admin", "\350\264\246\345\217\267\346\210\226\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        label_15->setText(QApplication::translate("people_admin", "\350\264\246\345\217\267\346\210\226\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        label_10->setText(QApplication::translate("people_admin", "\345\257\206       \347\240\201", Q_NULLPTR));
        cus->setText(QApplication::translate("people_admin", "\351\241\276\345\256\242", Q_NULLPTR));
        chef->setText(QApplication::translate("people_admin", "\345\216\250\345\270\210", Q_NULLPTR));
        waiter->setText(QApplication::translate("people_admin", "\346\234\215\345\212\241\345\221\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class people_admin: public Ui_people_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEOPLE_ADMIN_H
