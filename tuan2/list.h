class List
{
private:
	int a[1000];
	int N;
public:
	//Cau tu, tao danh sach rong
	List()
	{
		N = 0;		
	};
	//-------------------------------
	// Them phan tu co gia tri la value vao cuoi danh sach
	void Add(int value)
	{
		a[N++] = value;
	};
	//-------------------------------
	//In ra man hinh toan bo danh sach
	friend ostream &operator<<(ostream &out, List ds)
	{
		for(int i = 0; i<ds.N; i++)
			out<<ds.a[i]<<"; ";
		return out;
	};
	
	int Max()
	{
		int m = a[0];
		for(int i = 1; i<N; i++)
			if (m<a[i])
				m = a[i];
				
		return m;
	};
	
	bool Check(int value)
	{
		for(int i = 0; i<N; i++)
		{
			if (a[i] == value)
				return true;			
		}
		return false;		
	};
	
	int Count(int value)
	{
		int dem = 0;
		for(int i=0; i<N; i++)
		{
			if (a[i] == value)
				dem++;
			
		}
		return dem;
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
};
