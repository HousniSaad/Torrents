/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Oct 8 12:51:16 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quit;
    QWidget *centralWidget;
    QTabWidget *TabWidget;
    QWidget *SeriesTab;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QTreeView *SeriesView;
    QWidget *MoviesTab;
    QTreeView *MoviesView;
    QWidget *LogTab;
    QTreeView *LogView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Add;
    QPushButton *Delete;
    QFrame *line;
    QPushButton *Update;
    QSpacerItem *verticalSpacer;
    QPushButton *Quit;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Aide;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 400);
        MainWindow->setMinimumSize(QSize(600, 400));
        MainWindow->setMaximumSize(QSize(600, 400));
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        TabWidget = new QTabWidget(centralWidget);
        TabWidget->setObjectName(QString::fromUtf8("TabWidget"));
        TabWidget->setGeometry(QRect(10, 0, 451, 341));
        SeriesTab = new QWidget();
        SeriesTab->setObjectName(QString::fromUtf8("SeriesTab"));
        verticalLayoutWidget_2 = new QWidget(SeriesTab);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 451, 311));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        SeriesView = new QTreeView(verticalLayoutWidget_2);
        SeriesView->setObjectName(QString::fromUtf8("SeriesView"));
        SeriesView->setMaximumSize(QSize(16777215, 16777215));
        SeriesView->setStyleSheet(QString::fromUtf8(""));
        SeriesView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout_2->addWidget(SeriesView);

        TabWidget->addTab(SeriesTab, QString());
        MoviesTab = new QWidget();
        MoviesTab->setObjectName(QString::fromUtf8("MoviesTab"));
        MoviesView = new QTreeView(MoviesTab);
        MoviesView->setObjectName(QString::fromUtf8("MoviesView"));
        MoviesView->setGeometry(QRect(0, 0, 451, 311));
        TabWidget->addTab(MoviesTab, QString());
        LogTab = new QWidget();
        LogTab->setObjectName(QString::fromUtf8("LogTab"));
        LogView = new QTreeView(LogTab);
        LogView->setObjectName(QString::fromUtf8("LogView"));
        LogView->setGeometry(QRect(0, 0, 451, 311));
        TabWidget->addTab(LogTab, QString());
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(470, 30, 131, 311));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Add = new QPushButton(verticalLayoutWidget);
        Add->setObjectName(QString::fromUtf8("Add"));

        verticalLayout->addWidget(Add);

        Delete = new QPushButton(verticalLayoutWidget);
        Delete->setObjectName(QString::fromUtf8("Delete"));

        verticalLayout->addWidget(Delete);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        Update = new QPushButton(verticalLayoutWidget);
        Update->setObjectName(QString::fromUtf8("Update"));

        verticalLayout->addWidget(Update);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        Quit = new QPushButton(verticalLayoutWidget);
        Quit->setObjectName(QString::fromUtf8("Quit"));

        verticalLayout->addWidget(Quit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Aide = new QMenu(menuBar);
        menu_Aide->setObjectName(QString::fromUtf8("menu_Aide"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Aide->menuAction());
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindow);

        TabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        TabWidget->setTabText(TabWidget->indexOf(SeriesTab), QApplication::translate("MainWindow", "Series", 0, QApplication::UnicodeUTF8));
        TabWidget->setTabText(TabWidget->indexOf(MoviesTab), QApplication::translate("MainWindow", "Movies", 0, QApplication::UnicodeUTF8));
        TabWidget->setTabText(TabWidget->indexOf(LogTab), QApplication::translate("MainWindow", "Log", 0, QApplication::UnicodeUTF8));
        Add->setText(QApplication::translate("MainWindow", "New Entry", 0, QApplication::UnicodeUTF8));
        Delete->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        Update->setText(QApplication::translate("MainWindow", "Update", 0, QApplication::UnicodeUTF8));
        Quit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menu_Aide->setTitle(QApplication::translate("MainWindow", "&Aide", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
