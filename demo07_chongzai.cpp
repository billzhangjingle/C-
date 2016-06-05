#include "iostream"
#include <stdio.h>
using namespace std;


int func(int a, int b, int c = 0)
{
         return a * b * c;
}
int func(int a, int b)
{
         return a + b;
}

int main(void)
{
	int c;
	
	//当函数重载遇到默认参数时有二义性
	//c = func(1, 2);
	return 0;
}