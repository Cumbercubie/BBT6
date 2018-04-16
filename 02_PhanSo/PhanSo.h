#include<iostream>
using namespace std;

class PhanSo
{
	int iTu, iMau;
public:
	friend istream& operator>>(istream&, PhanSo&);
	friend ostream& operator<<(ostream&, PhanSo&);
	PhanSo RutGon();
	void Set(int, int, int);
	PhanSo operator+ (PhanSo);
	PhanSo operator- (PhanSo);
	PhanSo operator* (PhanSo);
	PhanSo operator/ (PhanSo);
	PhanSo operator== (PhanSo);
	PhanSo operator!= (PhanSo);
	PhanSo operator> (PhanSo);
	PhanSo operator>= (PhanSo);
	PhanSo operator< (PhanSo);
	PhanSo operator<= (PhanSo);

};