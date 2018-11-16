#ifndef UI_CHOOSE_TABLE_H
#define UI_CHOOSE_TABLE_H
#include"customer.h"
#include <QDialog>
#include"table.h"
namespace Ui {
class ui_choose_table;
}

class ui_choose_table : public QDialog
{
    Q_OBJECT

public:
    explicit ui_choose_table(customer * cus,QWidget *parent = 0);
    ~ui_choose_table();
    customer * logged;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


    void on_checkBox_1_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_5_stateChanged(int arg1);

private:
    Ui::ui_choose_table *ui;

};

#endif // UI_CHOOSE_TABLE_H
