
#include "date.h"
#include <iostream>
using namespace std;
#include "list.h"
#include "mystring.h"
#include "mystringadvance.h"
#include "a.h"
#include "b.h"
int main()
{
	MyStringAdvance s("    Nguyen     Duc     Dan   ");
	cout<<s<<endl;
	cout<<s.WordCount()<<endl;
	return 0;
}
