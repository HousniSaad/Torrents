/********************************************************************************
** Form generated from reading UI file 'AddDialog.ui'
**
** Created: Thu Oct 21 12:36:53 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

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

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *nomLabel;
    QLineEdit *nomLineEdit;
    QLabel *saisonLabel;
    QLineEdit *saisonLineEdit;
    QLabel *episodeLabel;
    QLineEdit *episodeLineEdit;
    QLabel *uRLLabel;
    QLineEdit *uRLLineEdit;
    QFrame *line;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(237, 189);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 150, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(Dialog);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 20, 228, 112));
        gridLayout = new QGridLayout(formLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        nomLabel = new QLabel(formLayoutWidget);
        nomLabel->setObjectName(QString::fromUtf8("nomLabel"));

        gridLayout->addWidget(nomLabel, 0, 0, 1, 1);

        nomLineEdit = new QLineEdit(formLayoutWidget);
        nomLineEdit->setObjectName(QString::fromUtf8("nomLineEdit"));

        gridLayout->addWidget(nomLineEdit, 0, 1, 1, 1);

        saisonLabel = new QLabel(formLayoutWidget);
        saisonLabel->setObjectName(QString::fromUtf8("saisonLabel"));

        gridLayout->addWidget(saisonLabel, 1, 0, 1, 1);

        saisonLineEdit = new QLineEdit(formLayoutWidget);
        saisonLineEdit->setObjectName(QString::fromUtf8("saisonLineEdit"));

        gridLayout->addWidget(saisonLineEdit, 1, 1, 1, 1);

        episodeLabel = new QLabel(formLayoutWidget);
        episodeLabel->setObjectName(QString::fromUtf8("episodeLabel"));

        gridLayout->addWidget(episodeLabel, 2, 0, 1, 1);

        episodeLineEdit = new QLineEdit(formLayoutWidget);
        episodeLineEdit->setObjectName(QString::fromUtf8("episodeLineEdit"));

        gridLayout->addWidget(episodeLineEdit, 2, 1, 1, 1);

        uRLLabel = new QLabel(formLayoutWidget);
        uRLLabel->setObjectName(QString::fromUtf8("uRLLabel"));

        gridLayout->addWidget(uRLLabel, 3, 0, 1, 1);

        uRLLineEdit = new QLineEdit(formLayoutWidget);
        uRLLineEdit->setObjectName(QString::fromUtf8("uRLLineEdit"));

        gridLayout->addWidget(uRLLineEdit, 3, 1, 1, 1);

        line = new QFrame(Dialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(47, 140, 181, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        nomLabel->setText(QApplication::translate("Dialog", "Nom Serie:", 0, QApplication::UnicodeUTF8));
        saisonLabel->setText(QApplication::translate("Dialog", "Saison", 0, QApplication::UnicodeUTF8));
        episodeLabel->setText(QApplication::translate("Dialog", "Episode", 0, QApplication::UnicodeUTF8));
        uRLLabel->setText(QApplication::translate("Dialog", "URL :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
