#include "resetdialog.h"
#include "ui_resetdialog.h"

Resetdialog::Resetdialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Resetdialog)
{
    ui->setupUi(this);
}

//Reset destructor
Resetdialog::~Resetdialog()
{
    delete ui;
}

//Shows the reset window
void Resetdialog::showResetDialog()
{
    show();
}

//Option to retun back to admin window
void Resetdialog::on_cancelButton_clicked()
{
    Resetdialog::close();
    emit showadmine();
}

//Updates the user information
void Resetdialog::on_updateButton_clicked()
{
    Userid = ui->userIDLine->text();
    Newpwd = ui->newPasswordLine->text();
    Usertype = type;

    Reset rst(Userid, Newpwd, Usertype);
    db.resetUserPwd(rst);

    ui->userIDLine->clear();
    ui->newPasswordLine->clear();
}

//Adds the user types to the combo box
void Resetdialog::on_userTypeComboBox_currentIndexChanged(int index)
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

