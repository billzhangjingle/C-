#include "iostream"
#include <stdio.h>
using namespace std;

//默认参数
void printAB(int x = 3)
{
	printf("%d\n", x);
}

//占位参数
int fun(int x, int y, int)
{
	return x+y;
}

//默认参数 + 占位参数
int fun2(int x, int y, int z = 0)
{
	return x+y;
}
			
int main()
{
	printAB();
	printAB(2);
	//fun(1, 2); 这样是不可以的，占位参数也必须传三个参数
	fun(1, 2, 3);
	
	//占位参数和默认参数一起说明，参数可以传两个值和传三个值
	fun2(3,4);
	fun2(1, 3, 4);
	
	return 0;
}