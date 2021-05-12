#include "studentscreen.h"
#include "ui_studentscreen.h"
#include <QMessageBox>

StudentScreen::StudentScreen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StudentScreen)
{
    ui->setupUi(this);
    connect(&sus, SIGNAL(hideSFeat()), this, SLOT(hideStudFeat()));
}

//Stduent destructor
StudentScreen::~StudentScreen()
{
    delete ui;
}

//Shows student window
void StudentScreen::on_addDataButton_clicked()
{
    student.show();
    student.raise();
    student.activateWindow();
}

//Shows student screen
void StudentScreen::showStudentScrn()
{
    show();

}

//Blocks student from seeing suspended accountt
void StudentScreen::hideStudFeat()
{
    show();
    ui->addDataButton->hide();
    ui->viewCSButton->hide();
    QMessageBox msg;
    msg.setWindowTitle("Account Suspended");
    msg.setText("This account is Suspended. Contact Administrator for further assistance.");
    msg.exec();
}

//Option to return to login screen
void StudentScreen::on_logOutButton_clicked()
{
    close();
    emit showLogine();
}
