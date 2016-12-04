#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class AA
{


public:
	AA()
	{
		cout<<"default "<<endl;
	}
	AA(int _a)
	{
		a = _a;	
		cout<<"default yinyong"<<endl;
	}

	AA(const AA &obj2)
	{
		a = obj2.a + 10;
		cout<<"fuzhi gouzao hanshu"<<endl;
	}
	~AA()
	{
		cout<<"xigouhanshu "<<endl;
	}
	void getA()
	{	
		printf("a:%d\n", a);
	}
protected:
private:
	int a;
};

void display01()
{
	AA a1;
	AA a2 = a1;
	a2 = a1;
}

void display02()
{
	AA a1(10);
	
	AA a2(a1);
	a2.getA();
}

int main(void)
{
	//display01();
	display02();
	cout<<"bye"<<endl;
	return 0;
}
