/********************************************************************************
** Form generated from reading UI file 'ui_save.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_SAVE_H
#define UI_UI_SAVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ui_save
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ui_save)
    {
        if (ui_save->objectName().isEmpty())
            ui_save->setObjectName(QStringLiteral("ui_save"));
        ui_save->resize(208, 142);
        label = new QLabel(ui_save);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 111, 41));
        label->setStyleSheet(QStringLiteral("font: 14pt \"Adobe Arabic\";"));
        pushButton = new QPushButton(ui_save);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 100, 75, 23));
        pushButton_2 = new QPushButton(ui_save);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 100, 75, 23));

        retranslateUi(ui_save);

        QMetaObject::connectSlotsByName(ui_save);
    } // setupUi

    void retranslateUi(QDialog *ui_save)
    {
        ui_save->setWindowTitle(QApplication::translate("ui_save", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ui_save", "\346\230\257\345\220\246\344\277\235\345\255\230\357\274\237", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ui_save", "\344\277\235\345\255\230", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ui_save", "\344\270\215\344\277\235\345\255\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ui_save: public Ui_ui_save {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_SAVE_H
