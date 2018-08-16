#ifndef mystring_h
#define mystring_h
#include <string.h>
using namespace std;
class MyString
{
protected:
	char a[100];
	int N;
public:
	MyString()
	{
		N = 0;
		a[N] = '\0';
	};
	MyString(const char *s)
	{
		N = strlen(s);
		strcpy(a, s);
		a[N] = '\0';
	};
	friend ostream &operator<<(ostream &o, MyString s)
	{
		o<<s.a;
		return o;
	};
	int Count(const char *s) const
	{
		int nS = strlen(s);
		if (nS > N)
			return 0;
		int c = 0;
		for(int i = 0; i<= N - nS; i++)
		{
			bool flag = true;
			for(int k = 0; k<nS; k++)
			{
				if(a[i+k] != s[k])
				{
					flag = false;
					break;					
				}				
			}
			if (flag)
				c++;
		}
		return c;
	};
	MyString Inverse() const
	{
		MyString kq;
		kq.N = N;
		for(int i = N-1; i>=0; i--)
		{
			kq.a[N-i-1] =a[i];
		}
		kq.a[N] = '\0';
		return kq;
	};	
};

#endif











