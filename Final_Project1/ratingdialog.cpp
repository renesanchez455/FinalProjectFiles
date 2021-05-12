#include "ratingdialog.h"
#include "ui_ratingdialog.h"

Ratingdialog::Ratingdialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Ratingdialog)
{
    ui->setupUi(this);
}

Ratingdialog::~Ratingdialog()
{
    delete ui;
}

void Ratingdialog::showRatingScrn()
{
    show();
}

void Ratingdialog::on_courseComboBox_currentTextChanged(const QString &arg1)
{
    course = arg1;
}

void Ratingdialog::on_lecturerComboBox_currentTextChanged(const QString &arg1)
{
    lecturer = arg1;
}


void Ratingdialog::on_usefulnessComboBox_currentTextChanged(const QString &arg1)
{
    usefulness = arg1;
}


void Ratingdialog::on_difficultyComboBox_currentTextChanged(const QString &arg1)
{
    difficulty = arg1;
}

void Ratingdialog::on_courseTypeComboBox_2_currentTextChanged(const QString &arg1)
{
    courseType = arg1;
}

void Ratingdialog::on_enjoyabilityComboBox_3_currentTextChanged(const QString &arg1)
{
    enjoyability = arg1;
}

void Ratingdialog::on_yearComboBox_currentTextChanged(const QString &arg1)
{
    year = arg1;
}


void Ratingdialog::on_okButton_clicked()
{
    QString comment = ui->commentsEdit->toPlainText();
    Rating rate(course, lecturer, usefulness, difficulty, courseType, enjoyability, year, comment);
    db.insertRating(rate);
}


void Ratingdialog::on_cancelButton_clicked()
{
    close();
    emit showStudentscr();
}


