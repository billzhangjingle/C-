#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

//const 的用法

class Test
{
public:
	Test()
	{
		a = 100;
		b = 200;
	}
	const int A()   //const 修饰this 指针 
	//int A()   const // const 修饰成员的内存
	{ 
		//观点1：const是修饰a,但是通过测试，我们发现，b++也不能编译通过
		//		//这说明：const把a 和 b都修饰了。。。。
		//
		//				//剖析：因为this作为函数的第一个参数，被隐藏。。。。const没有地方放。。。。
		//
		//const是修饰this
		a ++;
		//b++;
		return a; 
	}
	void A(int val) 
	{ 
		a = val; 
	}

	int BBB()
	{

		return a;
	}

protected:
private:
	int a;
	int b;
};


int Aaaaa(const Test *pthis) 
{ 
	return 10; 
}
int  main()
{
	Test t1;
	t1.A(3);
	t1.A();
	cout<<t1.BBB()<<endl;
	return 0;
}
