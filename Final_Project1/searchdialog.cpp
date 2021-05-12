#include "searchdialog.h"
#include "ui_searchdialog.h"
#include "database.h"

Searchdialog::Searchdialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Searchdialog)
{
    ui->setupUi(this);

}

//Search dialog destructor
Searchdialog::~Searchdialog()
{
    delete ui;
}

//Displays the search data 
void Searchdialog::dsiplaySearchData(QString f)
{
//    ui->idlinestuff->setText(f);
}

//Option to return to the admin window
void Searchdialog::on_cancelButton_clicked()
{
    Searchdialog::close();
    emit showadmine();
}

//Option to search for a student
void Searchdialog::on_searchButton_clicked()
{
    Database db;
    QString Id= ui->idLine->text();
    db.findStudent(Id);
}
