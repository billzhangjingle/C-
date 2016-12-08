#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Test
{
public:
	Test(int _a, int _b)
	{
		this->a = _a;
		this->b = _b;
		
	}	
	~Test()
	{
		cout<<"destory"<<endl;
	}

	Test& add(Test &t1)
	{
		this->a += t1.a ;
		this->b += t1.b;
		return *this;
	}
	void printAB()
	{
		cout<<"a"<<a<<" b"<<b<<endl;
	}
	void SetA(int _a)
	{
		a = _a;
	}
	void SetB(int _b)
	{
		b = _b;
	}
	int GetA()
	{
		return a;
	}
	int GetB()
	{
		return b;
	}
protected:
private:
	int a;
	int b;
};
Test add2(Test &t1, Test &t2)
{
	Test t3(t1.GetA() + t2.GetA(), t1.GetB() + t2.GetB());
	return t3;
}
void printAB(Test &t1,Test &t2)
{
	cout<<"t1+t2 :a"<<t1.GetA() + t2.GetA() <<" b"<<t1.GetB() + t2.GetB()<<endl;
}
int main()
{
	Test t1(1, 2);
	Test t2(3, 4);
	Test t3 = add2(t1, t2);
	printAB(t1, t2);
	t1.add(t2);
	t1.printAB();
	t2.printAB();
	return 0;
}
