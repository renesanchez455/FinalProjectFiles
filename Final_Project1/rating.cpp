#include "rating.h"


//Initializes the rating constructor
Rating::Rating(const QString &cId, const QString &lId, const QString &ufn, const QString &diff, const QString &cTpe, const QString &enjblty, const QString &yr, const QString &cmmnt)
{
    courseId = cId;
    lecturerId = lId;
    usefulness = ufn;
    difficulty = diff;
    courseType = cTpe;
    enjoyability = enjblty;
    year = yr;
    comment = cmmnt;
}

//Sets the course ID
void Rating::setCourse(QString CID)
{
    courseId = CID;
}

//Sets the lecturer ID
void Rating::setLecturer(QString LID)
{
    lecturerId = LID;

}

//Sets the course usefulness
void Rating::setUsefulness(QString UFN)
{
    usefulness = UFN;
}

//Sets the course difficulty
void Rating::setDifficulty(QString DIFF)
{
    difficulty = DIFF;
}

//Sets the course type
void Rating::setCourseType(QString CTPE)
{
    courseType = CTPE;
}

//Sets the course enjoyability
void Rating::setEnjoyability(QString ENJ)
{
    enjoyability = ENJ;
}

//Sets the year
void Rating::setYear(QString YR)
{
    year = YR;
}

//Sets the comment
void Rating::setComment(QString CMMNT)
{
    comment = CMMNT;
}

//Returns the course ID
QString Rating::getCourse()
{
    return courseId;
}

//Returns the lecturer ID
QString Rating::getLecturer()
{
    return lecturerId;
}

//Returns the course usefulness
QString Rating::getUsefulness()
{
    return usefulness;
}

//Returns the course difficulty
QString Rating::getDifficulty()
{
    return difficulty;
}

//Returns the course type
QString Rating::getCourseType()
{
    return courseType;
}

//Returns the course enjoyability
QString Rating::getEnjoyability()
{
    return enjoyability;
}


//Returns the year
QString Rating::getYear()
{
    return year;
}

//Returns the comment
QString Rating::getComment()
{
    return comment;
}




