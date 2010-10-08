#ifndef QSXML_H
#define QSXML_H

#include<QUrl>

#include<QString>
#include<QStringList>

#include<QFile>
#include <QtXml> //le noeud Series

struct QShow
{
    QString Name;
    QString Season;
    QString Episode;
    QUrl url;
};

class QSXML
{
public:
    QSXML();

    void exec(); //the main function
    QList<QShow> FullElmt();
    void QUpdate(QList<QShow> MListe);//Save Xml File each update

private:

    QList<QShow> Show;
    QDomDocument *dom;
    QFile xml_doc;
};

#endif // QSXML_H
