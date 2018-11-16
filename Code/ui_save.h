#ifndef UI_SAVE_H
#define UI_SAVE_H

#include <QDialog>
#include"sql_api.h"
namespace Ui {
class ui_save;
}

class ui_save : public QDialog
{
    Q_OBJECT

public:
    explicit ui_save(QWidget *parent = 0);
    ~ui_save();
public slots:
    bool on_pushButton_2_clicked();

    bool on_pushButton_clicked();
private slots:


private:
    Ui::ui_save *ui;
};

#endif // UI_SAVE_H
