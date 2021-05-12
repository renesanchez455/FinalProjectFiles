#include "loginscreen.h"
#include "ui_loginscreen.h"


LoginScreen::LoginScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginScreen)
{
    ui->setupUi(this);
    connect(&sscr, SIGNAL(showLogine()), this, SLOT(showLogin()));
    connect(&lscr, SIGNAL(showLogine()), this, SLOT(showLogin()));
    connect(&ascr, SIGNAL(showLogine()), this, SLOT(showLogin()));
    connect(&addstud, SIGNAL(showLogine()), this, SLOT(showLogin()));
        //Connectts the different users to the login
}

//Login destructor
LoginScreen::~LoginScreen()
{
    delete ui;
}

//Option to close login window
void LoginScreen::on_cancelButton_clicked()
{
    close();
}

//Allows users the ability to login
void LoginScreen::on_loginButton_clicked()
{
    QString username = ui->usernameLine->text();
    QString password = ui->passwordLine->text();
    QString userType = type;

    QString res= db.verifyLogin(username, password, userType);
    ui->duplicatelabel->setText(res);

    //Opens student window once their information is verified
    if(res == "student correct")
    {
        hide();
        sscr.show();
        sscr.raise();
        sscr.activateWindow();

    }
    //Prevents student access to suspended account
    if (res == "student account suspended")
    {
        hide();
        sscr.hideStudFeat();
    }
     //Opens lecturer window once their information is verified
    if(res == "lecturer correct")
    {
        hide();
        lscr.show();
        lscr.raise();
        lscr.activateWindow();
    }
    
    //Prevents lecturer access to suspended account
    if(res == "lecturer account suspended")
    {
        hide();
        lscr.hideLecFeat();
    }
    //Grants admin access
    if(res == "admin correct")
    {
        hide();
        ascr.show();
        ascr.raise();
        ascr.activateWindow();
    }

    ui->usernameLine->clear();
    ui->passwordLine->clear();

}

//Places the user types in the combo boc
void LoginScreen::on_userComboBox_currentIndexChanged(int index)
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
    if(index == 3)
    {
        type="admin";
    }
}

//Shows login screen
void LoginScreen::showLogin()
{
    show();
}

//Allows for a new student to be created
void LoginScreen::on_registerStudentButton_clicked()
{
    addstud.show();
    addstud.raise();
    addstud.activateWindow();

    hide();
}

