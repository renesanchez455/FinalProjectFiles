#include "suspend.h"

//`Initializes the suspend constructor
Suspend::Suspend(const QString &uId, const QString &uSt, const QString &tp)
{
    userId = uId;
    type = tp;
    status = uSt;
}

//Sets the type
void Suspend::setType(QString t)
{
    type = t;
}

//Sets the user ID
void Suspend::setuserId(QString Uid)
{
    userId = Uid;
}

//Setts the user status
void Suspend::setuserStatus(QString Ust)
{
    status = Ust;
}

//Returns the type
QString Suspend::getType()
{
    return type;
}

//Returns the user ID
QString Suspend::getuserId()
{
    return userId;
}

//Returns the user status
QString Suspend::getuserStatus()
{
    return status;
}


