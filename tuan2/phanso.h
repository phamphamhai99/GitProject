#include <iostream>
using namespace std;
class PhanSo
{
private:
	int t;
	int m;
	int UCLN(int a, int b)
	{
		while (b!=0)
		{
			int r = a%b;
			a = b;
			b = r;
		}
		return a;
	};
public:
	PhanSo()
	{
		t = 1;	m = 1;		
	};
	PhanSo(int mau)
	{
		t = 1;	m = mau;
	};
	PhanSo (int tu, int mau)
	{
		t = tu;
		if (mau == 0)
			m = 1;
		else
			m = mau;
	};	
	
	friend ostream& operator <<(ostream &out, PhanSo p)
	{
		int u = p.UCLN(p.t, p.m);
		out<<p.t/u<<"/"<<p.m/u;
		return out;
	};
	
	PhanSo operator+(PhanSo b)
	{
		return PhanSo(t * b.m + m * b.t, m * b.m);
	};
	
	PhanSo operator+(int b)
	{
		return PhanSo(t + m * b, m);		
	};
	
	PhanSo Tru(PhanSo b)
	{
		return PhanSo(t*b.m - m *b.t, m * b.m);		
	};	
};
