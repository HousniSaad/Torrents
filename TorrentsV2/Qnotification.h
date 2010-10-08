#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <libnotify/notify.h>
#include<QString>

class QNotification
{
public:
    QNotification(QString title,QString body);

    void notifie(QString title, QString body);
private:
    QString name;
    QString icon;
    NotifyNotification *notification;
};

#endif // NOTIFICATION_H
