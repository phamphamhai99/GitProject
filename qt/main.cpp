#include <iostream>
using namespace std;
//......
int main()
{
	List<PhanSo> ds;
	
	ds.Add(PhanSo(1, 2));
	ds.Add(PhanSo(3, 4));
	ds.Add(PhanSo(3));
	
	cout<<ds<<endl;  //in ra 1/2; 3/4; 1/3

	return 0;
}
