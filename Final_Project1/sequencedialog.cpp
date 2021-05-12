#include "sequencedialog.h"
#include "ui_sequencedialog.h"

Sequencedialog::Sequencedialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Sequencedialog)
{
    ui->setupUi(this);
}

//Sequence destructor
Sequencedialog::~Sequencedialog()
{
    delete ui;
}

//Option to add a new sequence
void Sequencedialog::on_addButton_clicked()
{
    qDebug()<<course;
    syllabusId = ui->syllabusIdEdit->text();

    Sequence seq(syllabusId, program, progYear, semester, course);
    ui->resultLabel->setText(db.insertSequence(seq));
}

//Adds the 2 programs to the combo box 
void Sequencedialog::on_ProgramComboBox_currentIndexChanged(int index)
{
    if(index == 0)
    {
        program="";
    }
    if(index == 1)
    {
        program="AINT";
    }
    if(index == 2)
    {
        program="BINT";
    }
}

//Adds the two semesters to the combo box
void Sequencedialog::on_SemesterComboBox_currentIndexChanged(int index)
{
    if(index == 0)
    {
        semester="";
    }
    if(index == 1)
    {
        semester="1";
    }
    if(index == 2)
    {
        semester="2";
    }
}

//Option to return to admin window
void Sequencedialog::on_cancelButton_clicked()
{
    close();
    emit showadmine();
}

//Adds the course to the combo box
void Sequencedialog::on_CourseComboBox_currentTextChanged(const QString &arg1)
{
    course=arg1;
}

