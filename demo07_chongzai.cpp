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
	
	//��������������Ĭ�ϲ���ʱ�ж�����
	//c = func(1, 2);
	return 0;
}