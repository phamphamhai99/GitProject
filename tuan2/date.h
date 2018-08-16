#include <iostream>
using namespace std;
class Date
{
private:
	int d;
	int m;
	int y;
	bool NamNhuan(int nam)
	{
		return (nam%4 ==0 && nam %100 != 0) || (nam % 400 == 0);
	};
	int SoNgayCuaThangTrongNam(int thang, int nam)
	{
		switch(thang)
		{
		case 1:		case 3:		case 5:		case 7:		case 8:
		case 10:		case 12:			return 31;
			break;
		case 4:		case 6:		case 9:		case 11:
			return 30;
			break;
		case 2:
			if (NamNhuan(nam))
				return 29;
			else
				return 28;
			break;
		};
	};
public:	
	Date()
	{
		d = 1; m = 1; y = 2000;
	};
	Date(int ngay, int thang, int nam)
	{
		d = ngay; m = thang; y = nam;
	};
	friend ostream &operator<<(ostream &out, Date p)
	{
		out<<p.d<<"-"<<p.m<<"-"<<p.y;
		return out;
	};
	//Toan tu ++ truoc
	Date operator++()
	{
		int so_ngay_cua_thang = SoNgayCuaThangTrongNam(m, y);
		if (d < so_ngay_cua_thang)
		{
			d++;
		}
		else
		{
			d = 1;
			if (m < 12)
				m++;
			else
			{
				m = 1;
				y++;
			}
		}
		return Date(d, m, y);
	};
	//Toan tu ++ sau
	Date operator++(int a)
	{
		Date kq = Date(d, m, y);
		
		int so_ngay_cua_thang = SoNgayCuaThangTrongNam(m, y);

		if (d < so_ngay_cua_thang)
		{
			d++;
		}
		else
		{
			d = 1;
			if (m < 12)
				m++;
			else
			{
				m = 1;
				y++;
			}
		}
		return kq;
	};
	Date operator+(int n)
	{
		Date kq(d, m, y);
		for(int i = 1; i<=n; i++)
			kq++;
		return kq;
	};
	int operator -(Date p)
	{
		int dem = 0;
		while (!(d == p.d && m == p.m && y == p.y))
		{
			p++;
			dem++;
		}
		return dem;
	};
};





















