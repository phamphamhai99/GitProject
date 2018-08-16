/*
Nhap vao so N (N<=6)
In ra manh hinh cac day nhi phan do dai N
Vi du: N = 3;
000
001
010
011
100
101
110
111
*/
#include <iostream>
using namespace std;
int pow(int a, int n)
{
	int t = 1;
	for(int i = 1; i<=n; i++)
		t*=a;
	return t;
}
int main()
{
	int N;
	cout<<"Nhap N = ";
	cin>>N;
	int a[10];
	for(int i = 0; i<N; i++)
		a[i] = 0;
	int k = 0;
	do
	{
		for(int i = 0; i<N; i++)
			cout<<a[i];
		cout<<endl;
		int r = N-1;
		while (a[r] == 1)
		{
			a[r] = 0;
			r--;
		}	
		a[r] = 1;
		k++;
	}while(k<pow(2, N));
	return 0;
}





























