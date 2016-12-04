#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
//重点就是这个如果自己写了，编译器就不会再提供了。
class Test
{
public:
	//如果你写了copy构造函数，那么编译器不会在提供无参构造函数
	Test(Test &obj)
	{
		cout<<"我是copy构造函数 1 "<<endl;
		//a = 1;
		//b = 2;
	}
	//如果你写了有参或者无参构造函数，那么编译器也不会提供无参构造函数
	Test(int _a, int _b)
	{
		cout<<"我是copy构造函数 2"<<endl;
		//a = 1;
		//b = 2;
	}
protected:
private:
	int a ;
	int b;
};

int main()
{
	//这个会失败，因为不再提供默认的构造参数了。
	//Test t1;
	
	// copy 2	
	Test t2(1,2);
	
	//copy 1
	Test t3 = t2;
	//system("pause");
	return 0;
}
