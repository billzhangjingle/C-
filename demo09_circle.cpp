//2016/6/5 20:45:05
//类的封装和调用的方法。
#include "iostream"
#include <stdio.h>
using namespace std;




//类在大括号之间是类的内部
//大括号之外是类的外部

//public: 既能在类的内部使用，也可以在类的外部使用。

//private:私有属性和方法，只能在类的内部使用，不能栽外部使用。

//struct 默认是 public的，class 默认是private的。
//类是一个数据类型，对象是一个抽象。


class Circle
{
public:
	double r;
	double s;
public:
	double getR()
	{
		return r;
	}
	
	void setR(double val)
	{
		r = val;
	}
	//增加功能的时候是增加类的方法。
	double getS()
	{
		s = 3.14*r*r;
		return s;
	}
protected:
	
			
};

//面向对象主要是加工类
//面向过程主要是加工函数
int main(void)
{
	//通过类定义变量 对象
	Circle c1, c2;
	c1.setR(10);
	cout <<"" << c1.getS()<<endl;
	
	//c++ 编译器是如何知道c1 c2 调用了gets 的函数。
	
	return 0;
}