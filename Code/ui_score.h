#ifndef UI_SCORE_H
#define UI_SCORE_H

#include <QDialog>
#include<QVector>
#include"customer.h"
#include<QComboBox>
namespace Ui {
class ui_score;
}

class ui_score : public QDialog
{
    Q_OBJECT

public:
    explicit ui_score(customer *_logged, QWidget *parent = 0);
    ~ui_score();
     customer *logged;
    QVector<QComboBox *>combos;
private slots:
    void on_pushButton_clicked();

private:
    Ui::ui_score *ui;
};

#endif // UI_SCORE_H
