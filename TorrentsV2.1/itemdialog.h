#ifndef ITEMDIALOG_H
#define ITEMDIALOG_H

#include <QDialog>

namespace Ui {
    class itemDialog;
}

class itemDialog : public QDialog
{
    Q_OBJECT

public:
    explicit itemDialog(QWidget *parent = 0);
    ~itemDialog();

private slots:
    void addItems();

signals:
    void Jobdone();

private:
    Ui::itemDialog *ui;
};

#endif // ITEMDIALOG_H
