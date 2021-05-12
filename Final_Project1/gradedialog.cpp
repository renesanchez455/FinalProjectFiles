#include "gradedialog.h"
#include "ui_gradedialog.h"

Gradedialog::Gradedialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Gradedialog)
{
    ui->setupUi(this);
}

//Gradedialog destructor
Gradedialog::~Gradedialog()
{
    delete ui;
}

