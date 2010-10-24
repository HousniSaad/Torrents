/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Oct 24 19:30:05 2010
**      by: Qt User Interface Compiler version 4.7.0
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
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu_File;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(608, 400);
        MainWindow->setMinimumSize(QSize(600, 400));
        MainWindow->setMaximumSize(QSize(613, 400));
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"color:black;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"}\n"
"\n"
"QMenuBar\n"
"{\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"}\n"
"\n"
"QMenu{\n"
"color:black;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"}\n"
"\n"
"QMainWindow{\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"}\n"
"\n"
"QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-wi"
                        "dth: 80px;\n"
"}\n"
"\n"
"#topFrame QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QTabWidget::pane{\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"}\n"
"\n"
" QTabBar::tab {\n"
"left: 8px;\n"
"color:black;\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"     border: 2px solid #C4C4C3;\n"
"     border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"     border-top-left-radius: 4px;\n"
"     border-top-right-radius: 4px;\n"
"     min-width: 8ex;\n"
"width:55px;\n"
"     height:30px;\n"
"     padding: 2px;\n"
" }\n"
"\n"
" QTabBar::tab:selected, Q"
                        "TabBar::tab:hover {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #fafafa, stop: 0.4 #f4f4f4,\n"
"                                 stop: 0.5 #e7e7e7, stop: 1.0 #fafafa);\n"
" }\n"
"\n"
" QTabBar::tab:selected {\n"
"\n"
"     border-color: #9B9B9B;\n"
"     border-bottom-color: #C2C7CB; /* same as pane color */\n"
" }\n"
"\n"
" QTabBar::tab:!selected {\n"
"     border-top-right-radius: 4px;\n"
"    /* margin-top: 2px; /* make non-selected tabs look smaller */\n"
" }\n"
"\n"
"QTreeView::item{\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"color:red;\n"
"    alternate-background-color: blue;\n"
"}\n"
"\n"
"QHeaderView::section{\n"
"color:black;\n"
"     border: 2px solid #C4C4C3;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff,"
                        " stop: 1 #888)\n"
"}\n"
"\n"
"QTreeView{\n"
"     border: 2px solid #C4C4C3;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,fx: 0.3, fy: -0.4,radius: 1.35, stop: 0 #fff, stop: 1 #C3C3C3);\n"
"\n"
"}\n"
"\n"
" QTreeView::item:hover {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e7effd, stop: 1 #C3C3C3);\n"
"     border: 1px solid #bfcde4;\n"
" }\n"
"\n"
" QTreeView::item:selected {\n"
"     border: 1px solid #567dbc;\n"
" }\n"
"\n"
" QTreeView::item:selected:active{\n"
"     border: 1px solid #C4C4C3;\n"
"color:white;\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #000, stop: 1 #C3C3C3);\n"
" }\n"
"\n"
" QTreeView::item:selected:!active {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6b9be8, stop: 1 #C3C3C3);\n"
" }\n"
""));
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        TabWidget = new QTabWidget(centralWidget);
        TabWidget->setObjectName(QString::fromUtf8("TabWidget"));
        TabWidget->setGeometry(QRect(10, 10, 451, 341));
        TabWidget->setStyleSheet(QString::fromUtf8(""));
        SeriesTab = new QWidget();
        SeriesTab->setObjectName(QString::fromUtf8("SeriesTab"));
        SeriesView = new QTreeView(SeriesTab);
        SeriesView->setObjectName(QString::fromUtf8("SeriesView"));
        SeriesView->setGeometry(QRect(1, 1, 436, 290));
        SeriesView->setMaximumSize(QSize(436, 290));
        SeriesView->setStyleSheet(QString::fromUtf8(""));
        SeriesView->setEditTriggers(QAbstractItemView::DoubleClicked);
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
        Add->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(Add);

        Delete = new QPushButton(verticalLayoutWidget);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(Delete);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        Update = new QPushButton(verticalLayoutWidget);
        Update->setObjectName(QString::fromUtf8("Update"));
        Update->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(Update);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        Quit = new QPushButton(verticalLayoutWidget);
        Quit->setObjectName(QString::fromUtf8("Quit"));
        Quit->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(Quit);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 608, 23));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu_File->menuAction());
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
