#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
class MyTest
{
public:
	MyTest(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		cout<<"test 1"<<endl;
	}

	MyTest(int a, int b)
	{
		this->a = a;
		this->b = b;

		cout<<"test 2"<<endl;
		MyTest(a, b, 100);
	}
	~MyTest()
	{
		printf("MyTest~:%d, %d, %d\n", a, b, c);
	}

protected:
private:
	int a;
	int b;
	int c;

public:
	int getC() const { return c; }
	void setC(int val) { c = val; }
};

int main()
{
	MyTest t1(1, 2);
	printf("c:%d\n", t1.getC()); //c value 
	//system("pause");
	return 0;
}
