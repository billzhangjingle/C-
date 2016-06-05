//2016/6/5 14:57:59 
//author bill
//函数重载遇到函数指针的测试
#include "iostream"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int func(int x) // int(int a)
{
	return x;
}

int func(int a, int b)
{
	return a + b;
}

int func(const char* s)
{
	return strlen(s);
}


//定义一个数组类型
typedef int MYTYPEAarry[10];
MYTYPEAarry a1; //int a[10];

//定义一个数组类型指针类型
typedef int (*MYArrayP)[10]; 

MYArrayP myarray = NULL;
//myarray = &a1;
//这样就是一个二级指针。

 int (*myP)[10]; //告诉编译器给我分配4个字节的内存。。。我要做一个指针变量 这个变量指向一个数组。。




 //定义一个类型，，函数类型。。
 //这个函数是 int aaa(int a);
typedef int(*PFUNC)(int a); // int(int a)int fun(int x, int y, int)

typedef int(*PFUNC2)(const char *p); // int(int a)

int main(int argc, char *argv[])
{
	int c = 0;
	//func是一个函数名，函数名就代表函数的入口地址，函数名就是函数指针变量
	{
		PFUNC p = func;
 		c = p(1);
	}
	

	//c = p("ddddd");

	printf("c = %d\n", c);

	{
		PFUNC2 myp2 = func;
		myp2("aaaa");
	}

	printf("Press enter to continue ...");
	getchar();	
	return 0;
}