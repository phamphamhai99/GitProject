#include <iostream>
using namespace std;
int main()
{
	int N;
	cout<<"Nhap so phan tu: ";
	cin>>N;
	float a[100];
	for(int i = 0; i< N; i++)
	{
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>a[i];		
	}
	
	float t = 0, max = a[0];
	
	for(int i = 0; i<N; i++)
	{
		t+= a[i];
		if (max < a[i])
			max = a[i];
	}
	cout<<"Tong day la: "<<t<<endl;
	cout<<"Max = "<<max<<endl;
	
	/*kiem tra tang day tang dan*/
	bool f = true;
	for(int i = 0; i< N-1; i++)
	{
		if (a[i] > a[i+1])
		{
			f = false;
			break;
		}
	}
	
	if (f)
	{
		cout<<"Day tang dan\n";
	}
	else
	{
		cout<<"Day khong tang dan\n";
	}
	
	/*
	Tim so phan tu cua day con co nhieu phan tu nhat tang dan
	VD:  3; 5; 6; 4; 7; 9; 10; 5; 7;	
	*/
	
	/*
	Tim so lan doi cho it nhat hai phan tu cho nhau de duoc day tang dan
	*/
	
	
	return 0;
	

	
}
