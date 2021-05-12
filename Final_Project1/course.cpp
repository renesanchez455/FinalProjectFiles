#include "course.h"

//Initializes the course data
Course::Course(const QString &cId, const QString &courseN, const QString &cred, const QString &descrp)
{
    courseId=cId;
    courseName=courseN;
    noOfCredits=cred;
    courseDescrip=descrp;
}

//Sets the course ID
void Course::setcourseId(QString i)
{
    courseId =i;
}

//Sets the course name
void Course::setcourseName(QString j)
{
    courseName=j;
}

//Sets the credits amount
void Course::setnoOfCredits(QString k)
{
    noOfCredits=k;
}

//Sets the course description
void Course::setcourseDescrip(QString l)
{
    courseDescrip=l;
}

//Returns the ID
QString Course::getcourseId()
{
    return courseId;
}

//Returns the course name
QString Course::getcourseName()
{
    return courseName;
}

//Returns the credits amount
QString Course::getnoOfCredits()
{
    return noOfCredits;
}

//Returns the course description
QString Course::getcourseDescrip()
{
    return courseDescrip;
}
