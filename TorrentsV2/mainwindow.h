#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAbstractItemModel>
#include <QTreeView>

#include "webview.h"
#include "qsxml.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QAbstractItemModel *createSeriesMailModel(QString);

protected slots:
    void Refreshing(void);
    void WindowText(QString name);
    void Waiting();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    WebView *web;

    QSXML *serie;
};

#endif // MAINWINDOW_H
