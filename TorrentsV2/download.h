#ifndef DOWNLOAD_H
#define DOWNLOAD_H


#include <QDialog>
#include <QNetworkAccessManager>
#include <QUrl>
#include<QFile>

QT_BEGIN_NAMESPACE
class QNetworkReply;
QT_END_NAMESPACE

class Download :QDialog
{
    Q_OBJECT

public:
    Download(QString l);

    void startRequest(QUrl url);

private slots:
    void downloadFile();
    void httpFinished();
    void httpReadyRead();

signals:
    void start();

private:

    QList<QString> list;
    QUrl url;
    QNetworkAccessManager qnam;
    QNetworkReply *reply;
    QFile *file;
    int httpGetId;
    bool httpRequestAborted;
};

#endif
