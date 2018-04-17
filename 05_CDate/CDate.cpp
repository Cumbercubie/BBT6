#include <iostream>
#include "CDate.h"

CDate::CDate()
{
    //ctor
}
CDate::CDate(int x=1,int y=1,int z=1999)
{
    iNgay = x;
    iThang = y;
    iNam = z;
}
CDate::~CDate()
{
    //dtor
}
bool CDate::isNhuan()
{
    if (iThang%4==0 && iThang%100!=0 && iThang%400!=0)
        return true;
    else
        return false;
}
bool CDate::isDayMax()
{
    if (iThang==1 || iThang==3 || iThang==5 || iThang==7 || iThang==8 || iThang==10 || iThang==12)
    {
        if (iNgay >31)
            return true;
        else return false;
    }
    else
        if (iThang==4 || iThang==6 || iThang==9 || iThang==11)
        {
            if (iNgay >30)
                return true;
            else return false;
        }
    else
    {
        if (this->isNhuan()==true)
        {
            if (iNgay >29)
                return true;
            else
                return false;
        }
        else
        {
            if (iNgay >28)
                return true;
            else return false;
        }
    }
}
istream& operator>>(istream& is,CDate& Date)
{
    is >> Date.iNgay >> Date.iThang >> Date.iNam;
    return is;
}
ostream& operator<<(ostream& os,CDate& Date)
{
    os << Date.iNgay <<"/"<<Date.iThang<<"/"<<Date.iNam;
    return os;
}
CDate CDate::operator+(int iSoNgay)
{
    iNgay+=iSoNgay;
    if (this->isDayMax()==true)
    {
        iThang+=1;
        iNgay=1;
    }
    if (iThang==12)
    {
        iNam+=1;
        iThang=1;
        iNgay=1;
    }
    return (*this);
}
CDate CDate::operator-(int iSoNgay)
{
    if (iNgay--==0)
}
