#include "suspenddialog.h"
#include "ui_suspenddialog.h"
#include "suspend.h"

Suspenddialog::Suspenddialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Suspenddialog)
{
    ui->setupUi(this);
}

//Suspend dialog destructor
Suspenddialog::~Suspenddialog()
{
    delete ui;
}

//Opens suspend dialog window
void Suspenddialog::showSuspendDialog()
{
    show();
}

//Option to return to the admin window
void Suspenddialog::on_cancelButton_clicked()
{
    Suspenddialog::close();
    emit showadmine();
}

//Allows for the user status to be updated
void Suspenddialog::on_updateButton_clicked()
{
    Userid = ui->userIDLine->text();
    Usertype = type;
    Userstatus = status;

    Suspend sus(Userid, Userstatus, Usertype);
    db.suspendAccount(sus);
    ui->userIDLine->clear();
}


//Adds the user types to the combo box
void Suspenddialog::on_userTypeComboBox_currentIndexChanged(int index)
{
    if(index == 0)
    {
        type="null";
    }
    if(index == 1)
    {
        type="student";
    }
    if(index == 2)
    {
        type="lecturer";
    }
}

//Adds the statuses to the combo box
void Suspenddialog::on_StatusComboBox_currentIndexChanged(int index)
{
    if(index == 0)
    {
        status="null";
    }
    if(index == 1)
    {
        status="Active";
    }
    if(index == 2)
    {
        status="Inactive";
    }
}

