#ifndef UI_WAITER_H
#define UI_WAITER_H

#include <QDialog>
#include"waiter.h"
#include<QPushButton>
#include<QVector>
namespace Ui {
class ui_waiter;
}

class ui_waiter : public QDialog
{
    Q_OBJECT

public:
    explicit ui_waiter(waiter *get_waiter, QWidget *parent = 0);
    ~ui_waiter();
    waiter *logged;
    void show_table();
    QVector<QPushButton *>pbs;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    void finished();
private:
    Ui::ui_waiter *ui;
};

#endif // UI_WAITER_H
