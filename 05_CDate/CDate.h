#ifndef CDATE_H
#define CDATE_H
#include <iostream>
using namespace std;

class CDate
{
private:
	int iNgay,iThang,iNam;
public:
	CDate();
	CDate(int,int,int);
	~CDate();
	bool isNhuan();
	bool isDayMax();
	friend istream& operator>>(istream&,CDate&);
	friend ostream& operator<<(ostream&,CDate&);
	CDate operator+(int);
	CDate operator-(int);
	CDate &operator++(int);
	CDate &operator--(int);
};

#endif // CDATE_H
