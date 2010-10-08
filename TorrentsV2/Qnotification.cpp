#include "Qnotification.h"
#include<QDir>
QNotification::QNotification(QString title, QString body)
{
    name="notify";
    icon=QDir::currentPath()+"/icon.png";
    /* Init libnotify library */
    notify_init(name.toStdString().c_str());

    notification = notify_notification_new (title.toStdString().c_str()//const char *
                                            ,body.toLocal8Bit().data() //char *
                                            ,icon.toLocal8Bit().data()//icon
                                            , NULL);
    notify_notification_set_timeout(notification, 3000);
    notify_notification_set_urgency(notification,NOTIFY_URGENCY_CRITICAL);
    notify_notification_set_hint_string (notification,"x-canonical-append","");
    notify_notification_show (notification, NULL);
}

void QNotification::notifie(QString title, QString body)
{
    notification = notify_notification_new (title.toStdString().c_str()//const char *
                                            ,body.toLocal8Bit().data() //char *
                                            ,icon.toLocal8Bit().data()
                                            , NULL);
    notify_notification_set_hint_string (notification,"x-canonical-append","");
    notify_notification_show (notification, NULL);

}
