/********************************************************************************
** Form generated from reading UI file 'itemdialog.ui'
**
** Created: Thu Oct 21 13:30:29 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMDIALOG_H
#define UI_ITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_itemDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *nomLabel;
    QLineEdit *nomLineEdit;
    QLabel *episodeLabel;
    QLineEdit *episodeLineEdit;
    QLabel *saisonLabel;
    QLineEdit *saisonLineEdit;
    QLabel *uRLLabel;
    QLineEdit *uRLLineEdit;
    QFrame *line;

    void setupUi(QDialog *itemDialog)
    {
        if (itemDialog->objectName().isEmpty())
            itemDialog->setObjectName(QString::fromUtf8("itemDialog"));
        itemDialog->resize(240, 201);
        buttonBox = new QDialogButtonBox(itemDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 160, 211, 31));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(itemDialog);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 209, 112));
        gridLayout = new QGridLayout(formLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        nomLabel = new QLabel(formLayoutWidget);
        nomLabel->setObjectName(QString::fromUtf8("nomLabel"));

        gridLayout->addWidget(nomLabel, 0, 0, 1, 1);

        nomLineEdit = new QLineEdit(formLayoutWidget);
        nomLineEdit->setObjectName(QString::fromUtf8("nomLineEdit"));

        gridLayout->addWidget(nomLineEdit, 0, 1, 1, 1);

        episodeLabel = new QLabel(formLayoutWidget);
        episodeLabel->setObjectName(QString::fromUtf8("episodeLabel"));

        gridLayout->addWidget(episodeLabel, 1, 0, 1, 1);

        episodeLineEdit = new QLineEdit(formLayoutWidget);
        episodeLineEdit->setObjectName(QString::fromUtf8("episodeLineEdit"));

        gridLayout->addWidget(episodeLineEdit, 1, 1, 1, 1);

        saisonLabel = new QLabel(formLayoutWidget);
        saisonLabel->setObjectName(QString::fromUtf8("saisonLabel"));

        gridLayout->addWidget(saisonLabel, 2, 0, 1, 1);

        saisonLineEdit = new QLineEdit(formLayoutWidget);
        saisonLineEdit->setObjectName(QString::fromUtf8("saisonLineEdit"));

        gridLayout->addWidget(saisonLineEdit, 2, 1, 1, 1);

        uRLLabel = new QLabel(formLayoutWidget);
        uRLLabel->setObjectName(QString::fromUtf8("uRLLabel"));

        gridLayout->addWidget(uRLLabel, 3, 0, 1, 1);

        uRLLineEdit = new QLineEdit(formLayoutWidget);
        uRLLineEdit->setObjectName(QString::fromUtf8("uRLLineEdit"));

        gridLayout->addWidget(uRLLineEdit, 3, 1, 1, 1);

        line = new QFrame(itemDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(17, 140, 211, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(itemDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), itemDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), itemDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(itemDialog);
    } // setupUi

    void retranslateUi(QDialog *itemDialog)
    {
        itemDialog->setWindowTitle(QApplication::translate("itemDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        nomLabel->setText(QApplication::translate("itemDialog", "Nom", 0, QApplication::UnicodeUTF8));
        episodeLabel->setText(QApplication::translate("itemDialog", "Episode", 0, QApplication::UnicodeUTF8));
        saisonLabel->setText(QApplication::translate("itemDialog", "Saison", 0, QApplication::UnicodeUTF8));
        uRLLabel->setText(QApplication::translate("itemDialog", "URL", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class itemDialog: public Ui_itemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMDIALOG_H
