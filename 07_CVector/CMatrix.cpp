#include "CMatrix.h"
#include <iostream>
#include <cstdlib>
using namespace std;


CMatrix::CMatrix()
{

}

istream& operator>> (istream& is, CMatrix& MT)
{
    for (int i=0;i<MT.iCot;i++)
        for (int j=0;j<MT.iHang;j++)
        {
            cout << "nhap phan tu thu: " << i+1 << " " << j+1;
            is >> MT.a[i][j];
        }
    return is;
}
ostream& operator<< (ostream& os, CMatrix& MT)
{
    for (int i=0;i<MT.iCot;i++)
    {
        for (int j=0;j<MT.iHang;j++)
            os << "a[" << i << "," << j << "]: " << MT.a[i][j] << "\t";
        os << endl;
    }
    return os;
}
CMatrix CMatrix::operator+ (CMatrix mtB)
{
    CMatrix mtTong;
	for (int i = 0; i < iCot; i++)
		for (int j = 0; j < iHang; j++)
			mtTong.a[i][j] = a[i][j] + mtB.a[i][j];
	return mtTong;
}
CMatrix CMatrix::operator-(CMatrix mtB)
{
    CMatrix mtHieu;
	for (int i = 0; i < iCot; i++)
		for (int j = 0; j < iHang; j++)
			mtHieu.a[i][j] = a[i][j] - mtB.a[i][j];
	return mtHieu;
}
CMatrix CMatrix::operator*(CMatrix mtB)
{
    CMatrix mtTich;
    if (iHang != mtB.iCot)
    {
        cout << "Can't multiply";
        exit(1);
    }
    else
        for (int i = 0; i < iCot; i++)
            for (int j = 0; j < mtB.iCot; j++)
                mtTich.a[i][j] += a[i][j] * mtB.a[i][j];
    return mtTich;
}

