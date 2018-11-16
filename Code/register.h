#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);
    ~Register();

private slots:
    void accepted();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void time();
private:
    Ui::Register *ui;
    int now=60;
    QTimer *qt;
};

#endif // REGISTER_H
