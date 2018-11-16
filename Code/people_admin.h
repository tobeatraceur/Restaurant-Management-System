#ifndef PEOPLE_ADMIN_H
#define PEOPLE_ADMIN_H
#include<QString>
#include <QDialog>

namespace Ui {
class people_admin;
}

class people_admin : public QDialog
{
    Q_OBJECT

public:
    explicit people_admin(QWidget *parent = 0);
    ~people_admin();

private slots:
    void on_pushButton_clicked();

    void on_add_clicked();

    void on_del_2_clicked();

    void on_change_clicked();

    void on_cus_clicked();

    void on_chef_clicked();

    void on_waiter_clicked();





private:
    Ui::people_admin *ui;
};

#endif // PEOPLE_ADMIN_H
