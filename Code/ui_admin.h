#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QDialog>

namespace Ui {
class ui_admin;
}

class ui_admin : public QDialog
{
    Q_OBJECT

public:
    explicit ui_admin(QWidget *parent = 0);
    ~ui_admin();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::ui_admin *ui;
};

#endif // UI_ADMIN_H
