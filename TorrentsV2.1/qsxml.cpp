#include "Qnotification.h"
#include "qsxml.h"

QSXML::QSXML()
{
    dom = new QDomDocument("XML_FILE");
    xml_doc.setFileName("Series.xml");// On choisit le fichier contenant les informations XML.
}

//execute the main fonction
void QSXML::exec()
{
    if(!xml_doc.open(QIODevice::ReadOnly))// Si l'on n'arrive pas à ouvrir le fichier XML.
    {
        QNotification ERROR1("Erreur à l'ouverture du document XML","Le document XML n'a pas pu être ouvert. Vérifiez que le nom est le bon et que le document est bien placé");
        return;
    }

    if (!dom->setContent(&xml_doc)) // Si l'on n'arrive pas à associer le fichier XML à l'objet DOM.
    {
        xml_doc.close();
        QNotification ERROR2("Erreur à l'ouverture du document XML","Le document XML n'a pas pu être attribué à l'objet QDomDocument.");
        return;
    }

    xml_doc.close(); // Dans tous les cas, on doit fermer le document XML : on n'en a plus besoin, tout est compris dans l'objet DOM.

    QDomElement root = dom->documentElement();//root
    QDomNode node = root.firstChild();//First child
    QDomElement element = node.toElement();

    Show.clear();

    while(!node.isNull())
    {
        QShow elm;

        elm.url.setUrl(element.attribute("url","NULL"));        
        elm.Name    = element.text();        
        elm.Episode = element.attribute("episode","NULL");        
        elm.Season  = element.attribute("saison","NULL");
        Show.append(elm);

        node = node.nextSibling();
        element=node.toElement();
    }
}

//Return all QShow elements
QList<QShow> QSXML::FullElmt()
{
    return this->Show;
}

//Update the Xml File and save changes
void QSXML::QUpdate(QList<QShow> MListe)
{
    if(!xml_doc.open(QIODevice::ReadOnly))// Si l'on n'arrive pas à ouvrir le fichier XML.
    {
        QNotification ERROR1("Erreur à l'ouverture du document XML","Le document XML n'a pas pu être ouvert. Vérifiez que le nom est le bon et que le document est bien placé");
        return;
    }

    if (!dom->setContent(&xml_doc)) // Si l'on n'arrive pas à associer le fichier XML à l'objet DOM.
    {
        xml_doc.close();
        QNotification ERROR2("Erreur à l'ouverture du document XML","Le document XML n'a pas pu être attribué à l'objet QDomDocument.");
        return;
    }

    xml_doc.close(); // Dans tous les cas, on doit fermer le document XML : on n'en a plus besoin, tout est compris dans l'objet DOM.

    QDomElement root = dom->documentElement();//root

    for(int i=0;i<MListe.count();i++)
    {
        QDomNode n = root.firstChild();
        while(!n.isNull()) {
            QDomElement e = n.toElement();
            if(!e.isNull()) {
                if(e.text() == MListe[i].Name)
                {
                    e.setAttribute("episode", MListe[i].Episode);
                    break;
                }
            }
            n = n.nextSibling();
        }
    }

    QFile FinalFile("Series.xml");
    if( !FinalFile.open(QIODevice::WriteOnly) )
        qDebug() << "Erreur de sauvegarde";

    QTextStream out ( &FinalFile);
    out << dom->toString();
    FinalFile.close();
}

void QSXML::addEntry(QString Name, QString Episode, QString Saison, QString url)
{
    if(!xml_doc.open(QIODevice::ReadOnly))// Si l'on n'arrive pas à ouvrir le fichier XML.
    {
        qDebug()<<"Erreur à l'ouverture du document XML,Le document XML n'a pas pu être ouvert. Vérifiez que le nom est le bon et que le document est bien placé";
        return;
    }

    if (!dom->setContent(&xml_doc)) // Si l'on n'arrive pas à associer le fichier XML à l'objet DOM.
    {
        xml_doc.close();
        qDebug()<<"Erreur à l'ouverture du document XML,Le document XML n'a pas pu être attribué à l'objet QDomDocument.";
        return;
    }

    xml_doc.close(); // Dans tous les cas, on doit fermer le document XML : on n'en a plus besoin, tout est compris dans l'objet DOM.

    QDomElement root = dom->documentElement();//root
    QDomElement write_elem = dom->createElement("serie");

    //node text
    write_elem.setAttribute("saison",Saison);
    write_elem.setAttribute("episode",Episode);
    write_elem.setAttribute("url",url);

    QDomText text = dom->createTextNode(Name);
    write_elem.appendChild(text);

    root.appendChild(write_elem);
    QFile FinalFile("Series.xml");
    if( !FinalFile.open(QIODevice::WriteOnly) )
        qDebug() << "Erreur de sauvegarde";

    QTextStream out ( &FinalFile);
    out << dom->toString();
    FinalFile.close();
}
