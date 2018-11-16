#ifndef UI_CUSTOMER_H
#define UI_CUSTOMER_H
#include"customer.h"
#include <QDialog>

namespace Ui {
class ui_customer;
}

class ui_customer : public QDialog
{
    Q_OBJECT

public:
    explicit ui_customer(customer *,QWidget *parent = 0);
    ~ui_customer();
    customer *logged;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::ui_customer *ui;
};

#endif // UI_CUSTOMER_H
