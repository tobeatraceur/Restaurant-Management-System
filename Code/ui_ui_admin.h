/********************************************************************************
** Form generated from reading UI file 'ui_admin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_ADMIN_H
#define UI_UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_admin
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;

    void setupUi(QDialog *ui_admin)
    {
        if (ui_admin->objectName().isEmpty())
            ui_admin->setObjectName(QStringLiteral("ui_admin"));
        ui_admin->resize(334, 261);
        verticalLayoutWidget = new QWidget(ui_admin);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 0, 211, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(ui_admin);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(240, 220, 75, 23));

        retranslateUi(ui_admin);

        QMetaObject::connectSlotsByName(ui_admin);
    } // setupUi

    void retranslateUi(QDialog *ui_admin)
    {
        ui_admin->setWindowTitle(QApplication::translate("ui_admin", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ui_admin", "\350\217\234\345\215\225\347\256\241\347\220\206", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("ui_admin", "\350\264\246\346\210\267\347\256\241\347\220\206", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("ui_admin", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ui_admin: public Ui_ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_ADMIN_H
