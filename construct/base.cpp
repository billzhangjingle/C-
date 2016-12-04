#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Test
{
public:
	Test()
	{
		p = (char *)malloc(100);
		strcpy(p, "11111");
		cout<<"我是构造函数，自动被调用了"<<endl;
	}

	~Test()
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
	char *p ;
};

//单独搭建一个舞台
void ObjPlay()
{
	Test t1, t2;
	cout<<"展示t1的生命周期"<<endl;
}

int  main()
{
	ObjPlay();
	sleep(2);
	return 0;
}
