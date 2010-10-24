#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QTreeView>

#include <QSystemTrayIcon>

#include "webview.h"
#include "qsxml.h"

#include "itemdialog.h"

class QCloseEvent;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void createSeriesMailModel(QString);

protected slots:
    void Refreshing(void);
    void WindowText(QString name);
    void Waiting();
    void Hiding(bool);
    void SHiding(QSystemTrayIcon::ActivationReason reason);
    void addItem();

protected:
    void changeEvent(QEvent *e);
    void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *ui;
    QStandardItemModel *model;
    WebView *web;

    QSXML *serie;

    QSystemTrayIcon *SIcon;
    QAction *hiding;

    itemDialog *itemdia;
};

#endif // MAINWINDOW_H
