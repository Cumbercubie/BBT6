#ifndef CVECTOR_H
#define CVECTOR_H
#include <iostream>
#include <CMatrix.h>
using namespace std;
class CMatrix;
class CVector
{
private:
        int size[100];
        int n;
public:
        CVector();
        ~CVector();
        //friend istream& operator>>(istream&,CVector&);
        friend ostream& operator<<(ostream&,CVector&);
        friend CVector operator*(const CMatrix &mt,const CVector& vt);
        CVector operator+(CVector);
        CVector operator-(CVector);
        int operator*(CVector); //TichVoHuong
};

#endif // CVECTOR_H
