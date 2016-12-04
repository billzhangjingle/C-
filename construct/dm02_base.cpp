#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Test02
{
public:
	//Test02(void) //无参构造函数 默认构造函数
	//{
	//	p = (char *)malloc(100);
	//	strcpy(p, "11111");
	//	a = 0;
	//	b = 0;
	//	cout<<"我是构造函数，自动被调用了 111"<<endl;
	//}
	//这个会和 test02(void) 冲突，因为定义 Test02 a;的时候会有二义性
	Test02(int _a =0,int _b =0 ) //无参构造函数 默认构造函数
	{
		p = (char *)malloc(100);
		strcpy(p, "11111");
		a = _a;
		b = _b;
		cout<<"我是构造函数，自动被调用了222"<<endl;
	}
	 
	Test02(int _a =1)
	{
	 a = _a;
	 cout<<"w3333333"<<endl;
	}

	~Test02()
	{
		cout<<"我是析构函数，自动被调用了"<<endl;
		if (p != NULL)
		{
			free(p);
		}

	}
protected:
private:
	int a;
	int b;
	char *p ;
};

//单独搭建一个舞台
void ObjPlay()
{
	//Test02 t1(1, 2);
	//Test02 t1(1, 2);

	//Test02 t2 = (1, 2);
	Test02 t2 = 2;

	//Test02 t3 = Test02(3, 4);
	cout<<"展示t1的生命周期"<<endl;
}

int  main()
{
	ObjPlay();
	//system("pause");
	return 0;
}
