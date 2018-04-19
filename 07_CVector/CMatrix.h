#ifndef CMATRIX_H
#define CMATRIX_H
#include <iostream>
using namespace std;
class CVector;
class CMatrix
{
    private:
        int iHang,iCot;
        int a[10000][10000];
    public:
        CMatrix();
        //CMatrix(int,int);
        CMatrix(CMatrix&);
        friend istream& operator>>(istream&,CMatrix&);
        friend ostream& operator<<(ostream&,CMatrix&);
        friend CVector operator*(const CMatrix &mt,const CVector& vt);
        CMatrix operator+(CMatrix);
        CMatrix operator*(CMatrix);
        CMatrix operator-(CMatrix);
};

#endif // CMATRIX_H
