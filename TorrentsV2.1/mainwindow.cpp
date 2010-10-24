#include "Qnotification.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QAbstractItemModel>
#include <QStandardItemModel>

#include <QDebug>
#include <QtGui/QCloseEvent>
#include <QInputDialog>

//****Timer********************************[1]
#include<QTimer>
#include<QThread>

class SleeperThread : public QThread
{
public :
        static void msleep(unsigned long msecs)
        {
            QThread::msleep(msecs);
        }

};// this slot gets called everytime the QNetworkReply has new data.
    // We read all of its new data and write it into the file.
    // That way we use less RAM than when reading it at the finished()
    // signal of the QNetworkReply
//****************************************[/1]

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->Quit->setIcon(QIcon(":/quit.svg"));
    ui->Update->setIcon(QIcon(":/update.svg"));
    ui->Add->setIcon(QIcon(":/new.png"));
    ui->Delete->setIcon(QIcon(":/delete.svg"));
    ui->action_Quit->setIcon(QIcon(":/quit.svg"));

    itemdia = new itemDialog(this);

    setWindowIcon(QIcon(":/icon.png"));
    SIcon = new QSystemTrayIcon(this);
    SIcon->setIcon(QIcon(":/icon.png"));
    QMenu *menu = new QMenu(this);
        QAction *quitter = new QAction("Quitter",this);
        quitter->setIcon(QIcon(":/quit.svg"));
        QAction *updating = new QAction("Update",this);
        updating->setIcon(QIcon(":/update.svg"));
        hiding = new QAction("Hide/Show",this);
        hiding->setCheckable(true);
        hiding->isCheckable();

        menu->addAction(hiding);
        menu->addAction(updating);
        menu->addSeparator();
        menu->addAction(quitter);

    SIcon->setContextMenu(menu);
    SIcon->show();

    model = new QStandardItemModel(0, 4);
    ui->SeriesView->setModel(model);

    serie =new QSXML();
    web = new WebView();
    this->Refreshing();

    ui->SeriesView->setRootIsDecorated(false);
    ui->SeriesView->setAlternatingRowColors(true);

//[2]
    QTimer *timer= new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(Refreshing()));
    timer->start(3600000);//refresh every hour = 3600000 msecs
//[/2]

//*******************************SIGNAUX/SLOTS*******************************************************
    QObject::connect(ui->Update,SIGNAL(clicked()),this,SLOT(Refreshing()));
    QObject::connect(ui->Add,SIGNAL(clicked()),this,SLOT(addItem()));

    QObject::connect(updating,SIGNAL(triggered()),this,SLOT(Refreshing()));
    QObject::connect(hiding,SIGNAL(toggled(bool)),this,SLOT(Hiding(bool)));

    QObject::connect(ui->Quit,SIGNAL(clicked()),qApp,SLOT(quit()));
    QObject::connect(ui->TabWidget,SIGNAL(currentChanged(int)),ui->TabWidget,SLOT(update()));
    QObject::connect(web,SIGNAL(Progression(QString)),this,SLOT(WindowText(QString)));
    QObject::connect(web,SIGNAL(Progression(QString)),this->statusBar(),SLOT(showMessage(QString)));
    QObject::connect(web,SIGNAL(QJobsDone()),this,SLOT(Waiting()));
    QObject::connect(quitter,SIGNAL(triggered()),qApp,SLOT(quit()));

    QObject::connect(itemdia,SIGNAL(Jobdone()),this,SLOT(Refreshing()));

    QObject::connect(SIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),
                          this,SLOT(SHiding(QSystemTrayIcon::ActivationReason)));
//***************************************************************************************************
}

MainWindow::~MainWindow()
{
    //delete web;
    delete ui;
}

void MainWindow::WindowText(QString name)
{
    this->setWindowTitle(name);
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void addSeriesMail(QStandardItemModel *model, const QString &name,
             const QString &season, const QString &episode,const QString &status)
{
    model->insertRow(0);
    model->setData(model->index(0, 0), name);
    model->setData(model->index(0, 1), season);
    model->setData(model->index(0, 2), episode);
    model->setData(model->index(0, 3), status);
}

void MainWindow::createSeriesMailModel(QString SType)
{
    for(int i= model->rowCount()-1;i>=0;i--) model->removeRow(i);

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Season"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Episode"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Status"));

    QList<QShow> Smodel=serie->FullElmt();

    for(int i=0;i<Smodel.count();i++)
        addSeriesMail(model,Smodel[i].Name,Smodel[i].Season,Smodel[i].Episode,SType); 
}

void MainWindow::Waiting()
{
    serie->exec();
    createSeriesMailModel("Pending");
}

void MainWindow::Refreshing()
{
    QNotification notify("New Scan:","Scanning ...");
    serie->exec();
    createSeriesMailModel("Searching");
    web->exec(serie);
}

void MainWindow::Hiding(bool status)
{
    if(status)
       MainWindow::hide();
    else
       this->show();
}

void MainWindow::closeEvent(QCloseEvent *qevent)
{
    hiding->setChecked(true);
    qevent->ignore();
}

void MainWindow::SHiding(QSystemTrayIcon::ActivationReason reason)
{
    switch(reason)
    {
    case QSystemTrayIcon::Trigger :
        if(hiding->isChecked())
        {
            hiding->setChecked(false);
            this->show();
        }
        else
        {
            hiding->setChecked(true);
            this->hide();
        }
        break;
    default:;
    }
}

void MainWindow::addItem()
{
    itemdia->show();
}

