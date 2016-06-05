#include "iostream"
#include <stdio.h>

using namespace  std;

struct Teacher
{
	char name[32];
	int age;
};

void printTe(const Teacher *p)
{
	//const修饰指针所指内存空间不能被修改
	//p->age = 10;
}

void printTe2( Teacher * const p)
{
	//const修饰指针 p变量不能被修改
	//p = NULL; //err
}


void printTe3( const Teacher * const p)
{
	//const修饰指针 p变量不能被修改
	//p = NULL;
	printf("p:age:%d \n", p->age);
}


void main01()
{
	const int a  = 10;
	int const b = 20;
	//a = 11;
	Teacher  t1;


}

/*
void getMem(char **myp)
{
	char *p = (char *)malloc(100);
	*myp = p; //间接的修改了实参的值。。。。。你要保证这个实参能被修改，才行
}
void main()
{
	char buf[20];
	getMem(&buf);

	system("pause");
}
*/

//c++里面，const不在是一个冒牌void main()
int  main()
{	//c里面的const是一个冒牌货
	const int a = 10;
	//a = 11; 直接修改a不可以

	int *p = (int *)&a;
	*p = 11; //但是间接修改a可以
	printf("a: %d \n", a);
	
	//*p是10 。。。。说明p和&a绑定的很死。。。
	//*p是11.。。。。说明*p所指的内存空间和&a,不一样。。。
	printf("*p :%d\n", *p);

	printf("&a: %d \n", &a);
	printf("p: %d \n", p);

}
