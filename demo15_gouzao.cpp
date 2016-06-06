//2016/6/6 21:23:36
//构造函数的初步用法
#include "iostream"
#include <stdio.h>
using namespace std;

class Test
{
public:
	Test()
	{
		a = 10;
	}
	
	//有参构造函数
	//三种应用场景
	Test(int val)
	{
		a = val;
	}
	
	Test(const Test &ojb)
	{
		
	}
	
private:
	int a;
};

int main(void)
{
	//有参构造函数的三种用法
	//() 括号和= 已经被c++ 做了手脚。
	Test t1(10);
	Test t2 = 11;//
	Test t3 = Test(12);//自动调，手动调用。
	
	
	return 0;
}
