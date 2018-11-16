#ifndef DISH_ADMIN_H
#define DISH_ADMIN_H
#include<QMessageBox>
#include <QDialog>
using namespace std;
namespace Ui {
class dish_admin;
}

class dish_admin : public QDialog
{
    Q_OBJECT

public:
    explicit dish_admin(QWidget *parent = 0);
    ~dish_admin();
    void show_table();
private slots:
    void on_pushButton_clicked();

    void on_add_clicked();

    void on_del_4_clicked();

    void on_change_clicked();

    void on_pushButton_2_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

private:
    Ui::dish_admin *ui;
};

#endif // DISH_ADMIN_H
