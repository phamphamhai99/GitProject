#ifndef b_h
#define b_h
#include "a.h"

class B : public A
{

public:
	void F(int t)
	{
		A::F(t);
	};

};

#endif
