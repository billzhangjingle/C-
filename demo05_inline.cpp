#include "iostream"
#include <stdio.h>
using namespace std;

//Ĭ�ϲ���
void printAB(int x = 3)
{
	printf("%d\n", x);
}

//ռλ����
int fun(int x, int y, int)
{
	return x+y;
}

//Ĭ�ϲ��� + ռλ����
int fun2(int x, int y, int z = 0)
{
	return x+y;
}
			
int main()
{
	printAB();
	printAB(2);
	//fun(1, 2); �����ǲ����Եģ�ռλ����Ҳ���봫��������
	fun(1, 2, 3);
	
	//ռλ������Ĭ�ϲ���һ��˵�����������Դ�����ֵ�ʹ�����ֵ
	fun2(3,4);
	fun2(1, 3, 4);
	
	return 0;
}