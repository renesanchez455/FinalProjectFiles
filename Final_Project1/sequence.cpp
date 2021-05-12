#include "sequence.h"

//Initializes the dequence constructor
Sequence::Sequence(const QString &sId, const QString &prog, const QString &progY, const QString &sem, const QString &cId)
{
    syllabusId = sId;
    Program = prog;
    programYear = progY;
    Semester = sem;
    courseId = cId;
}

//Sets the course ID
void Sequence::setcourseId(QString crsID)
{
    courseId = crsID;
}

//Sets the syllabus ID
void Sequence::setsyllabusId(QString syllID)
{
    syllabusId = syllID;
}


//Sets the program
void Sequence::setProgram(QString Prog)
{
    Program = Prog;
}


//Sets the program year
void Sequence::setprogramYear(QString progrY)
{
    programYear = progrY;
}

//Sets the semester
void Sequence::setSemester(QString Smstr)
{
    Semester = Smstr;
}

//Return the course ID
QString Sequence::getcourseId()
{
    return courseId;
}

//Return the syllabus ID
QString Sequence::getsyllabusId()
{
    return syllabusId;
}

//Return the program
QString Sequence::getProgram()
{
    return Program;
}

//Return the program year
QString Sequence::getprogramYear()
{
    return programYear;
}

//Return the semester
QString Sequence::getSemester()
{
    return Semester;
}


