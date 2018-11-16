#ifndef UI_CHOOSE_DISH_H
#define UI_CHOOSE_DISH_H
#include"customer.h"
#include <QDialog>
#include<QMenu>
#include<QTableWidgetItem>
#include<QVector>
namespace Ui {
class ui_choose_dish;
}

class ui_choose_dish : public QDialog
{
    Q_OBJECT

public:
    explicit ui_choose_dish(customer *cus,QWidget *parent = 0);
    ~ui_choose_dish();
    customer *logged;
    QVector <QPushButton*> pbs;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void rightClickedOperation();
    void on_tableWidget_cellClicked(int row, int column);



    void on_pushButton_4_clicked();

private:
    Ui::ui_choose_dish *ui;
    QMenu *popMenu;
    QAction *action;
};

#endif // UI_CHOOSE_DISH_H
