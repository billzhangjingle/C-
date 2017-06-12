#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

//
//
class A
{
public:
	int a;
	A()
	{
		a = 0;		b = 0;		c = 0;
	}

	void set(int a, int b, int c)
	{
		this->a = a;		
		this->b = b;		
		this->c = c;
	}
	void printA()
	{
		cout<<"i am prent printA "<<endl;	
	}
	void print()
	{
		cout<<"parent"<<endl;
	}
protected:
	int b;
private:
	int c;
};

class B: public A
{
	//B()
public:
	void print()
	{
		cout<<"B:a:"<<a<<endl;
		cout<<"B:b:"<<b<<endl;
		//cout<<"B:c:"<<c<<endl;
	}
};

class C:protected A
{
public:
	void print()
	{
		cout<<"C:a:"<<a<<endl;
		cout<<"C:b:"<<b<<endl;
		//cout<<"C:c:"<<c<<endl;
	}
};


class D:private A
{
public:
	void print()
	{
		cout<<"D:a:"<<a<<endl;
		cout<<"D:b:"<<b<<endl;
		//cout<<"D:c:"<<c<<endl;
	}
};
int main(void)
{
	A aa;
	B bb;
	C cc;
	D dd;
	
	bb.a = 100;	
	//cc.a = 100;	
	//dd.a = 100;	
	//
//	bb.set(10, 20, 30);
//	cc.set(1111,2222,3333);
//	dd.set(333, 222, 1111);
//
	aa.print();
	bb.print();
	cc.print();
	dd.print();
	return 0;
}
