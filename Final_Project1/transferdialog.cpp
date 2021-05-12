#include "transferdialog.h"
#include "ui_transferdialog.h"

Transferdialog::Transferdialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Transferdialog)
{
    ui->setupUi(this);
}

//Transfer dialog destructor
Transferdialog::~Transferdialog()
{
    delete ui;
}

