#include"PhanSo.h"
PhanSo(int t=0,int m=1)
{
	iTu=t;
	iMau=m;
}

void PhanSo::Set(int t, int m)
{
	iTu = t;
	iMau = m;
}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a != b)
		if (a > b)
			a -= b;
		else
			b -= a;
	return a;
}
PhanSo PhanSo::RutGon()
{
	PhanSo RG;
	int UCLN = TimUCLN(iTu, iMau);
	RG.iTu= iTu /= UCLN;
	RG.iMau= iMau /= UCLN;
	return RG;
}
istream& operator>> (istream& is,PhanSo ps)
{
	cin >> ps.iTu >> ps.iMau;
}
ostream& operator<<  (ostream& os,PhanSo ps)
{
	cout << ps.iTu << "/" <<  ps.iMau;
}
PhanSo PhanSo::operator+(PhanSo ps)
{
	PhanSo Tong(iTuSo*ps.iMauSo + ps.iTuSo*iMauSo,iMauSo*ps.iMauSo);
	Tong.RutGon();
	return Tong;
}
PhanSo PhanSo::operator-(PhanSo ps)
{
	PhanSo Hieu(iTuSo*ps.iMauSo - ps.iTuSo*iMauSo,iMauSo*ps.iMauSo);
	Hieu.RutGon();
	return Hieu;
}
PhanSo PhanSo::operator*(PhanSo ps)
{
	PhanSo Tich(iTuSo*ps.iTuSo,iMauSo*ps.iMauSo);
	Tich.RutGon();
	return Tich;
}
PhanSo PhanSo::operator/(PhanSo ps)
{
	PhanSo Thuong(iTuSo*ps.iMauSo,iMauSo*ps.iTuSo)
	Thuong.RutGon();
	return Thuong;
}
bool PhanSo::operator==(PhanSo ps)
{
	PhanSo ps1=ps.RutGon();
	PhanSo ps2=ps.RutGon();
	if ((ps1.iMau==ps2.iMau)&&(ps1.iTu==ps2.iTu))
	{
		return true;
	}
	return false;
}
bool PhanSo::operator!=(PhanSo ps)
{
	PhanSo ps1=ps.RutGon();
	PhanSo ps2=ps.RutGon();
	if ((ps1.iMau!=ps2.iMau)||(ps1.iTu!=ps2.iTu))
	{
		return true;
	}
	return false;
}
bool PhanSo::operator>(PhanSo ps)
{
	PhanSo ps1=ps.RutGon();
	PhanSo ps2=ps.RutGon();
	if ((ps1.iMau<ps2.iMau)&&(ps1.iTu==ps2.iTu))
	{
		return true;
	}
	if ((ps1.iMau==ps2.iMau)&&(ps1.iTu>ps2.iTu))
		return true;
	else
		return false;
}
bool PhanSo::operator>=(PhanSo ps)
{
	PhanSo ps1=ps.RutGon();
	PhanSo ps2=ps.RutGon();
	if ((ps1.iMau<ps2.iMau)&&(ps1.iTu==ps2.iTu))
	{
		return true;
	}
	if ((ps1.iMau==ps2.iMau)&&(ps1.iTu>ps2.iTu))
		return true;
	if ((ps1.iMau==ps2.iMau)&&(ps1.iTu==ps2.iTu))
		return true;
	else
		return false;
}
bool PhanSo::operator<=(PhanSo ps)
{
	PhanSo ps1=ps.RutGon();
	PhanSo ps2=ps.RutGon();
	if ((ps1.iMau>ps2.iMau)&&(ps1.iTu==ps2.iTu))
	{
		return true;
	}
	if ((ps1.iMau==ps2.iMau)&&(ps1.iTu<ps2.iTu))
		return true;
	if ((ps1.iMau==ps2.iMau)&&(ps1.iTu==ps2.iTu))
		return true;
	else
		return false;
}
bool PhanSo::operator<(PhanSo ps)
{
	PhanSo ps1=ps.RutGon();
	PhanSo ps2=ps.RutGon();
	if ((ps1.iMau>ps2.iMau)&&(ps1.iTu==ps2.iTu))
	{
		return true;
	}
	if ((ps1.iMau==ps2.iMau)&&(ps1.iTu<ps2.iTu))
		return true;
	else
		return false;
}	

}