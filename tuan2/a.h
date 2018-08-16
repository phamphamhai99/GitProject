#ifndef a_h
#define a_h

class A
{
private:
	int du_lieu_a;
public:
	A() { du_lieu_a = 0; };
	A(int i)
	{
		du_lieu_a = i;
	};
	void F(int i)
	{
		du_lieu_a += i;		
	};
	void F(int a, int b)
	{
		du_lieu_a = du_lieu_a + a + b;
	}
	void InRa() const
	{
		cout<<du_lieu_a<<endl;
	};
};

#endif
