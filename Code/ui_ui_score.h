/********************************************************************************
** Form generated from reading UI file 'ui_score.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_SCORE_H
#define UI_UI_SCORE_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_score
{
public:
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox;

    void setupUi(QDialog *ui_score)
    {
        if (ui_score->objectName().isEmpty())
            ui_score->setObjectName(QStringLiteral("ui_score"));
        ui_score->resize(400, 408);
        pushButton = new QPushButton(ui_score);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 370, 80, 20));
        verticalLayoutWidget = new QWidget(ui_score);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(100, 40, 211, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"Adobe \346\245\267\344\275\223 Std R\";\n"
"font: 14pt \"Adobe \346\245\267\344\275\223 Std R\";"));

        verticalLayout->addWidget(label);

        tableWidget = new QTableWidget(verticalLayoutWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ui_score);

        QMetaObject::connectSlotsByName(ui_score);
    } // setupUi

    void retranslateUi(QDialog *ui_score)
    {
        ui_score->setWindowTitle(QApplication::translate("ui_score", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ui_score", "\347\273\223\346\235\237\347\224\250\351\244\220", Q_NULLPTR));
        label->setText(QApplication::translate("ui_score", "\350\257\267\346\202\250\344\270\272\346\210\221\344\273\254\347\232\204\346\234\215\345\212\241\346\211\223\345\210\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ui_score", "\350\217\234\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ui_score", "\345\210\206\346\225\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("ui_score", "\346\234\215\345\212\241\345\221\230\350\257\204\345\210\206", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ui_score", "5", Q_NULLPTR)
         << QApplication::translate("ui_score", "4", Q_NULLPTR)
         << QApplication::translate("ui_score", "3", Q_NULLPTR)
         << QApplication::translate("ui_score", "2", Q_NULLPTR)
         << QApplication::translate("ui_score", "1", Q_NULLPTR)
         << QApplication::translate("ui_score", "0", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class ui_score: public Ui_ui_score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_SCORE_H
