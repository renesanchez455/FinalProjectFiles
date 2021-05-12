#include "admin.h"
#include "ui_admin.h"

admin::admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);

    connect(&lecturer, SIGNAL(showadmine()), this, SLOT(showAdmin()));
    connect(&course, SIGNAL(showadmine()), this, SLOT(showAdmin()));
    connect(&seq, SIGNAL(showadmine()), this, SLOT(showAdmin()));
    connect(&reset, SIGNAL(showadmine()), this, SLOT(showAdmin()));
    connect(&suspend, SIGNAL(showadmine()), this, SLOT(showAdmin()));

    //Connects the signals created from lecturer and student here with the data
}
//The admin destructor
admin::~admin()
{
    delete ui;
}

//Option to create a new lecturer
void admin::on_newlecturerbutton_clicked()
{
    lecturer.show();
    lecturer.raise();
    lecturer.activateWindow();

    hide();
}

//Option to create a new
void admin::on_newcoursebutton_clicked()
{
    course.show();
    course.raise();
    course.activateWindow();

    hide();
}

//Opens the admin window
void admin::showAdmin()
{
    show();
    raise();
    activateWindow();
}

//Option to leave tto login screen
void admin::on_logOutButton_clicked()
{
    close();
    emit showLogine();
}

//Option to create a new sequence
void admin::on_newsequencebutton_clicked()
{
    hide();
    seq.show();
    seq.raise();
    seq.activateWindow();
}

//Option to create a new password
void admin::on_rupwdButton_clicked()
{
    hide();
    reset.show();
    reset.raise();
    reset.activateWindow();
}

//Option to suspend an account
void admin::on_suspaccButton_clicked()
{
    hide();
    suspend.show();
    suspend.raise();
    suspend.activateWindow();
}

