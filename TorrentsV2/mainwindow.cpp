#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QAbstractItemModel>
#include <QStandardItemModel>

#include <QDebug>

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
    setWindowIcon(QIcon(":/icon.png"));

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

    QObject::connect(ui->Quit,SIGNAL(clicked()),this,SLOT(close()));
    QObject::connect(ui->TabWidget,SIGNAL(currentChanged(int)),ui->TabWidget,SLOT(update()));
    QObject::connect(web,SIGNAL(Progression(QString)),this,SLOT(WindowText(QString)));
    QObject::connect(web,SIGNAL(QJobsDone()),this,SLOT(Waiting()));
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

void addSeriesMail(QAbstractItemModel *model, const QString &name,
             const QString &season, const QString &episode,const QString &status)
{
    qDebug()<<"2"<<model->rowCount();
    model->insertRow(0);
    model->setData(model->index(0, 0), name);
    model->setData(model->index(0, 1), season);
    model->setData(model->index(0, 2), episode);
    model->setData(model->index(0, 3), status);
qDebug()<<"3"<<model->rowCount();
 }

QAbstractItemModel *MainWindow::createSeriesMailModel(QString SType)
{
    QStandardItemModel *model = new QStandardItemModel(0, 4);

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Season"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Episode"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Status"));
qDebug()<<"1"<<model->rowCount();
    QList<QShow> Smodel=serie->FullElmt();
    for(int i=0;i<Smodel.count();i++)
        addSeriesMail(model,Smodel[i].Name,Smodel[i].Season,Smodel[i].Episode,SType);

return model;
}

void MainWindow::Waiting()
{
    serie->exec();
    ui->SeriesView->setModel(createSeriesMailModel("Pending"));
}

void MainWindow::Refreshing()
{
    serie->exec();
    ui->SeriesView->setModel(createSeriesMailModel("Searching"));
    web->exec(serie);
}
