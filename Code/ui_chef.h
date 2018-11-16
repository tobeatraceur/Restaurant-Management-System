#ifndef UI_CHEF_H
#define UI_CHEF_H
#include<QPushButton>
#include<QVector>
#include <QDialog>
#include"chef.h"
namespace Ui {
class ui_chef;
}

class ui_chef : public QDialog
{
    Q_OBJECT

public:
    explicit ui_chef(chef * _logged,QWidget *parent = 0);
    ~ui_chef();
    QVector<QPushButton *>pbs_end;
    QVector<QPushButton *>pbs_begin;
    void table_show();
    chef *logged;
    QHash<QString,int>to_be_cooked;
private slots:
    void on_pushButton_clicked();
    void finished();
    void begin();
    void on_pushButton_2_clicked();

private:
    Ui::ui_chef *ui;
};

#endif // UI_CHEF_H
