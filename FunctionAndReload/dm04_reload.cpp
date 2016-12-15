#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
//运算符重载的学习
//运算符重载分为两种模式
//1、用全局函数，定义友元函数，在类中添加friend 来实现
//2、
class Complex 
{
public:
	Complex (int _a, int _b)
	{
		this->a = _a;
		this->b = _b;
	}
	~Complex()
	{
		cout<<"bye"<<endl;
	}
	void print()
	{
		cout<<"a"<<a<<"\tb:"<<b<<endl;	
	}

//friend Complex add(Complex &x, Complex &y); //第一步注释
//
friend Complex operator+(Complex &x, Complex &y);
protected:
private:
	int a;
	int b;
};


//Complex add(Complex &x, Complex &y) 第一步注释
//{
//	Complex c(x.a + y.a, x.b + y.b);
//	return c;
//}
Complex operator+(Complex &x, Complex &y)
{
	Complex c(x.a + y.a, x.b + y.b);
	return c;
}
int main()
{
	Complex c1(2,3), c2(3,4);
	c1.print();
	c2.print();
	//Complex c3 = add(c1, c2); 第一步注释
	//c3.print();
	//Complex c3 = operator+(c1, c2); 第一方式，跟下面这种调用方式是相同的
	Complex c3 = c1 + c2;
	c3.print();
	return 0;
}
