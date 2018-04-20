#include "CVector.h"

CVector::CVector()
{
    for (int i=0;i<n;i++)
        size[i]=0;
    //ctor
}
CVector::~CVector()
{
    //dtor
}
ostream& operator<<(ostream& os,CVector& CV)
{
    os << "(";
    for (int i=0; i< CV.n;i++)
        os << CV.size[i] <<",";
    os << ")\n";
    return os;
}
CVector CVector::operator+(CVector CV)
{
    CVector cvTong;
    cvTong.n=n>CV.n? n : CV.n;
    for (int i=0;i<cvTong.n;i++)
        cvTong.size[i]=size[i]+CV.size[i];
    return cvTong;
}
CVector CVector::operator-(CVector CV)
{
    CVector cvHieu;
    cvHieu.n=n>CV.n? n : CV.n;
    for (int i=0;i<cvHieu.n;i++)
        cvHieu.size[i]=size[i]-CV.size[i];
    return cvHieu;
}
int CVector::operator*(CVector CV)
{
    CVector cvTichVH;
    int S=0;
    cvTichVH.n=n>CV.n? n:CV.n;
    for (int i=0;i<cvTichVH.n;i++)
    {
        S+=size[i]*CV.size[i];
    }
    return S;
}
