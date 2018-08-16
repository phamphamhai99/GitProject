#ifndef mystringadvance_h
#define mystringadvance_h
#include <string.h>

using namespace std;
#include "mystring.h"

class MyStringAdvance : public MyString
{
public:
	MyStringAdvance(const char *s)
	{
		N = strlen(s);
		strcpy(a, s);
		a[N] = '\0';
	};
	int WordCount() const
	{
		int  i = 0;
		int dem = 0;
		//Duyet qua toan bo dau cach dau
		while (i< N && a[i] == ' ')  
			i++;
		while (i< N)
		{
			dem++;
			while (i<N && a[i] != ' ')
			{
				i++;
			}
			while (i+1<N && a[i] == ' ' && a[i+1] == ' ')
			{
				i++;
			}
			i++;
		}
		return dem;
	};
};

#endif
