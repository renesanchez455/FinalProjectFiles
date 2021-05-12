#include "transfer.h"

//Initializes the transfer constructor
Transfer::Transfer(const QString &cId, const QString &grd, const QString &inst)
{
    courseId = cId;
    grade = grd;
    institution = inst;
}

//Set the course ID
void Transfer::setCourse(QString CID)
{
    courseId = CID;
}

//Set the grade
void Transfer::setGrade(QString GRD)
{
    grade = GRD;
}

//Set the institution
void Transfer::setInstitution(QString INST)
{
    institution = INST;
}

//Returns the course ID
QString Transfer::getCourse()
{
    return courseId;
}

//Returns the grade
QString Transfer::getGrade()
{
    return grade;
}

//Returns the institution
QString Transfer::getInstitution()
{
    return institution;
}




