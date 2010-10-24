#include "itemdialog.h"
#include "ui_itemdialog.h"

#include "qsxml.h"

#include <QMessageBox>

itemDialog::itemDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::itemDialog)
{
    ui->setupUi(this);
    connect(ui->buttonBox,SIGNAL(accepted()),this,SLOT(addItems()));
    connect(ui->buttonBox,SIGNAL(rejected()),this,SLOT(close()));
}

itemDialog::~itemDialog()
{
    delete ui;
}

void itemDialog::addItems()
{
    if(ui->episodeLineEdit->text().isEmpty() || ui->nomLineEdit->text().isEmpty()
        || ui->uRLLineEdit->text().isEmpty() || ui->saisonLineEdit->text().isEmpty())
        QMessageBox::critical(this,"ERREUR","Remplissez tout les champs");
    else
    {
        QSXML Xfile;
        Xfile.addEntry(ui->nomLineEdit->text(),ui->episodeLineEdit->text(),
                   ui->saisonLineEdit->text(),ui->uRLLineEdit->text());
        emit Jobdone();
    }
}
