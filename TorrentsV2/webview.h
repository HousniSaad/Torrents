#ifndef WEBVIEW_H
#define WEBVIEW_H

#include<QWebView>
#include "downloadmanager.h"
#include <QRegExp>

#include "qsxml.h"

class WebView: public QObject
{
    Q_OBJECT

public:
    WebView();
    ~WebView();

    void exec(QSXML *Qelement);
    void getAllLinks();

protected slots:

    void finishLoading(bool);
    void progress(int i);
    void DownloadEnded(bool);

signals:
    void QMESSAGE();
    void QJobsDone();       //start downloading
    void Progression(QString name);

private:
    QString jQuery;         //javascript
    QWebView *view;
    DownloadManager manager;//nothing else than a download manager :D
    QRegExp rx;             //Regular expression

    QStringList liste;      //list of all the Url links i want to Download

    QList<QShow> elmtList;//List of Qshows
    QShow current;         //the current QShow
    int iCurrent;           //Current element indice
    QSXML *TheXml;
};

#endif // WEBVIEW_H
