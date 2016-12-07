#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
//一个类中首先调用成员的构造函数，然后再调用这个大类的构造函数
//析构函数的顺序和构造函数的顺序正好相反
class ABCD 
{
public:
	ABCD(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		printf("ABCD() construct, a:%d,b:%d,c:%d  \n", this->a, this->b, this->c);
	}
	~ABCD()
	{
		printf("~ABCD() construct,a:%d,b:%d,c:%d  \n", this->a, this->b, this->c);
	}
	int getA() 
	{
		return this->a;
	}
protected:
private:
	int a;
	int b;
	int c;
};


class MyE
{
public:
	MyE():abcd1(1,2,3),abcd2(4,5,6),m(100)
	{
		cout<<"MyD()"<<endl;
	}
	~MyE()
	{
		cout<<"~MyD()"<<endl;
	}
	MyE(const MyE & obj):abcd1(7,8,9),abcd2(10,11,12),m(100)
	{
		printf("MyD(const MyD & obj)\n");
	}

protected:
//private:
public:
	ABCD abcd1; //在没有默认构造函数的情况下，c++编译器不知道如何构造abc1，因此用的初始化列表对这个对象进行初始化
	ABCD abcd2;
	const int m;

};

int doThing(MyE mye1)
{
	printf("doThing() mye1.abc1.a:%d \n", mye1.abcd1.getA()); 
	return 0;
}

int run2()
{
	MyE myE;
	doThing(myE);
	return 0;
}

//
int run3()
{
	printf("run3 start..\n");

	ABCD abcd = ABCD(100, 200, 300);  //再这个run3() 结束之后再进行析构
	//若直接调用构造函数哪
	//想调用构造函数对abc对象进行再复制，可以吗？
	//在构造函数里面调用另外一个构造函数，会有什么结果？ 结果一会儿可以看另外一个例子dm12.cpp 
	//ABCD(400, 500, 600); //临时对象的生命周期,C++会构造一个临时对象，但是由于没有用到，变直接给析构掉，打印构造和析构两个函数
	printf("run3 end\n");
	return 0;
}

int main()
{
	//run2();
	cout<<"run 2"<<endl;
	run3();
	cout<<"run 3"<<endl;
	return 0;
}


