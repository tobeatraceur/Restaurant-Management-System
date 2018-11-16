#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QDialog>

namespace Ui {
class ui_manager;
}

class ui_manager : public QDialog
{
    Q_OBJECT

public:
    explicit ui_manager(QWidget *parent = 0);
    ~ui_manager();
    void show_table();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();



private:
    Ui::ui_manager *ui;
};

#endif // UI_MANAGER_H
