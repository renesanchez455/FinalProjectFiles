#include "reset.h"

//Initializes the reset constructor
Reset::Reset(const QString &uId, const QString &nPwd, const QString &tp)
{
    userId = uId;
    newPwd = nPwd;
    type = tp;
}

//Sets the user ID
void Reset::setuserId(QString Uid)
{
    userId = Uid;
}

//Sets the new password
void Reset::setnewPwd(QString newP)
{
    newPwd = newP;
}

//Sets the type
void Reset::setType(QString t)
{
    type = t;
}

//Returns the user ID
QString Reset::getuserId()
{
    return userId;
}

//Returns the new password
QString Reset::getnewPwd()
{
    return newPwd;
}

//Returns the type
QString Reset::getType()
{
    return type;
}

