#ifndef STUDENTSCREEN_H
#define STUDENTSCREEN_H
#include "studentdialog.h"
#include "ui_studentdialog.h"
#include "suspenddialog.h"
#include "ui_suspenddialog.h"
#include "ratingdialog.h"
#include "ui_ratingdialog.h"
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class StudentScreen; }
QT_END_NAMESPACE

class StudentScreen : public QDialog
{
    Q_OBJECT

public:
    StudentScreen(QWidget *parent = nullptr);
    ~StudentScreen();
signals:
    void showLogine();

public slots:
    void showStudentScrn();
    void hideStudFeat();

private slots:
    void on_logOutButton_clicked();

    void on_addRatingButton_clicked();

private:
    Ui::StudentScreen *ui;
    Studentdialog student;
    Suspenddialog sus;
    Ratingdialog rat;

};
#endif // STUDENTSCREEN_H
