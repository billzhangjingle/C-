#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


#include "iostream"
using namespace std;

class ABC
{
public:
	ABC(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		printf("a:%d,b:%d,c:%d \n", a, b, c);
		printf("ABC construct ..\n");
	}
	~ABC()
	{
		printf("a:%d,b:%d,c:%d \n", a, b, c);
		printf("~ABC() ..\n");
	}
protected:
private:
	int a;
	int b;
	int c;
};


class MyD
{
public:
	MyD():abc1(1,2,3),abc2(4,5,6),m(100)
	{
		cout<<"MyD()"<<endl;
	}
	~MyD()
	{
		cout<<"~MyD()"<<endl;
	}

protected:
private:
	ABC abc1; //c++编译器不知道如何构造abc1
	ABC abc2;
	const int m;
};


int run()
{
	MyD myD;
	return 0;
}

int main()
{

	run();
	//system("pause");
	return 0;
}

