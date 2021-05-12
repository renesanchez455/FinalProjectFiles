#include "lecturerdialog.h"
#include "ui_lecturerdialog.h"

#include "lecturer.h"
#include "database.h"

Lecturerdialog::Lecturerdialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Lecturerdialog)
{
    ui->setupUi(this);
}

//Lecturer destructor
Lecturerdialog::~Lecturerdialog()
{
    delete ui;
}

//Option to return to admin window
void Lecturerdialog::on_cancelButton_clicked()
{
    Lecturerdialog::close();

    emit showadmine();
}

//Assigns the information to the lecturer
void Lecturerdialog::on_okButton_clicked()
{
    LID = ui->lecturerIDLine->text();
    Fname = ui->lecturerFNLine->text();
    Lname = ui->lecturerLNLine->text();
    Pwd = ui->lecturerPasswordLine->text();
    Email = ui->lecturerEmailLine->text();
    Pno = ui->lecturerPhoneLine->text();
    DOB = ui->lecturerDOBBox->text();
    Gender = ui->lecturerGenderLine->text();

    Lecturer lec(LID, Fname, Lname, Pwd, Email, Pno, DOB, Gender);
    db.insertLecturer(lec);

    ui->lecturerIDLine->clear();
    ui->lecturerFNLine->clear();
    ui->lecturerLNLine->clear();
    ui->lecturerPasswordLine->clear();
    ui->lecturerEmailLine->clear();
    ui->lecturerPhoneLine->clear();
    ui->lecturerDOBBox->clear();
    ui->lecturerGenderLine->clear();
}
