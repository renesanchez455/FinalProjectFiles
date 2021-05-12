#include "studentdialog.h"
#include "ui_studentdialog.h"
#include"Student.h"
#include"database.h"

Studentdialog::Studentdialog(QWidget *parent)
    :  QDialog(parent),
      ui(new Ui::Studentdialog)
{
    ui->setupUi(this);
}

//Student dialog destructor
Studentdialog::~Studentdialog()
{
    delete ui;
}

//Option to return to login screen
void Studentdialog::on_cancelButton_clicked()
{
    close();
    emit showLogine();
//    emit showadmine();
}

//Assigns the information to student dialog
void Studentdialog::on_okButton_clicked()
{
    SID = ui->studentIDLine->text();
    Fname = ui->studentFNLine->text();
    Lname = ui->studentLNLine->text();
    Pwd = ui->studentPasswordLine->text();
    Email = ui->studentEmailLine->text();
    Pno = ui->studentPhoneLine->text();
    DOB = ui->studentDOBBox->text();
    Gender = ui->studentGenderLine->text();
    Student stu(SID, Fname, Lname, Pwd, Email, Pno, Gender, DOB);

    ui->resultLabel->setText(db.insertStudent(stu));
    ui->studentIDLine->clear();
    ui->studentFNLine->clear();
    ui->studentLNLine->clear();
    ui->studentPasswordLine->clear();
    ui->studentEmailLine->clear();
    ui->studentPhoneLine->clear();
    ui->studentDOBBox->clear();
    ui->studentGenderLine->clear();
}
