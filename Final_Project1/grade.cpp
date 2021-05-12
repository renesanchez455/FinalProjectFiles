#include "grade.h"

//Initializes the constructor
Grade::Grade(const QString &cId, const QString &grd)
{
    courseId = cId;
    grade = grd;
}

//Sets the coourse ID
void Grade::setCourse(QString Courseid)
{
    courseId = Courseid;
}

//Sets the grade
void Grade::setGrade(QString Grd)
{
    grade = Grd;
}

//Returns the course ID
QString Grade::getCourse()
{
    return courseId;
}

//Returns the grade
QString Grade::getGrade()
{
    return grade;
}
