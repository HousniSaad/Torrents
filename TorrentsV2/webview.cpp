#include "Qnotification.h"
#include "webview.h"
#include <QtWebKit>
#include <QMessageBox>

#include<QtNetwork>
#include<QRegExp>

//void Download(const QUrl &url,WebView *);

WebView::WebView()
{
    QNotification notify("Start:","Here we go");
    rx.setPatternSyntax(QRegExp::Wildcard);

    QFile file;
    file.setFileName(":/jquery.min.js");
    file.open(QIODevice::ReadOnly);
    jQuery = file.readAll();
    file.close();

    view = new QWebView();

    iCurrent=0;//premier indice

    QObject::connect(this->view, SIGNAL(loadFinished(bool)),this, SLOT(finishLoading(bool)));
    QObject::connect(this->view, SIGNAL(loadProgress(int)),this, SLOT(progress(int)));
    QObject::connect(&manager,SIGNAL(ended(bool)),this,SLOT(DownloadEnded(bool)));
}

//main function
void WebView::exec(QSXML *Qelement)
{
    elmtList = Qelement->FullElmt();
    TheXml=Qelement;

    current = elmtList[iCurrent];
    view->load(current.url);
}

//The page is 100% loaded
void WebView::finishLoading(bool)
{
    this->view->page()->mainFrame()->evaluateJavaScript(jQuery);
    this->getAllLinks();    
}

//Extract all the links i want from the QWebVeiw
void WebView::getAllLinks()
{

//Hi Quality********************************
    QRegExp Hrx;
    Hrx.setPattern("*720p*");
    Hrx.setPatternSyntax(QRegExp::Wildcard);
//******************************************

    //Javascript code to get the count of links********************************
    QString code ="document.getElementsByTagName(\"a\").length";
    QVariant count = this->view->page()->mainFrame()->evaluateJavaScript(code);
    QVariant fullHref;
    //**************************************************************************

    //The Pattern *House.S07E03*torrent************************************************
    rx.setPattern("*"+current.Name+".S"+current.Season+"E"+current.Episode+"*torrent");
    //*********************************************************************************

    int nombre =count.toInt();
    //if(!nombre) {this->view->reload();return;} for now i don't need it

    //Fetching for The Torrents I need*****************************************************************************
    for(int i=0;i<nombre;i++)
    {
        //extract all the page links****************************************************
        fullHref = this->view->page()->mainFrame()->evaluateJavaScript(
                      QString("document.getElementsByTagName(\"a\")[%1].href").arg(i));

         if(rx.exactMatch(fullHref.toString()))
         {
             if(Hrx.exactMatch(fullHref.toString()))  continue;

             liste << fullHref.toString();
         }
     }
    //***************************************************************************************************************
manager.append(liste);
}

WebView::~WebView()
{
    elmtList.clear();
    delete view;
}

//Show the View load progress not needed now
void WebView::progress(int p)
{
    emit Progression(QString("%1 : %2%").arg(current.Name).arg(p));
}

void WebView::DownloadEnded(bool status)
{
    if(status)
    {
        QNotification notify("Liste:",current.Name+": Downloaded");

        int epi= (current.Episode).toInt()+1;
        //I need 01 02 03 and not 1 2 or 3 *****************************************************
        elmtList[iCurrent].Episode=  epi < 10 ? QString("0%1").arg(epi):QString("%1").arg(epi);
        //**************************************************************************************
    }

    if(++iCurrent < this->elmtList.count())
    {
        liste.clear();
        this->current = elmtList[iCurrent];
        this->view->load(this->current.url);
    }
    else
    {
        TheXml->QUpdate(elmtList);
        emit Progression("Torrents");
        emit QJobsDone();
    }
}
