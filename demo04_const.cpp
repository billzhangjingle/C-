#include "iostream"
#include <stdio.h>
using namespace std;


void main41()
{
	int a = 10;

	const int &b = a;

	a = 11;

	//b = 12; //ͨ�������޸�a,�Բ����޸Ĳ���

}


struct Teacher1
{
	char name[64];
	int age;
};

void printTe2(const Teacher1 *const pt)
{

}

//const�����ñ���(��ָ�ڴ�ռ�)ӵ��ֻ������
void printTe(const Teacher1 &t)
{
	//t.age  = 11;
}
void main42()
{
	Teacher1 t1;
	t1.age = 33;
	printTe(t1);
}


struct AdvTeacher
{
	int &a;
	int &b;
	int c ;
};

int  main()
{
	//��һ�����ó�ʼ��
	const int b = 10;
	printf("b:%d", &b);
	const int &a = b;

	//int &a1 = 19; //�������const����ʧ��
	
	//�ڶ��ֳ�ʼ��
	const int &c = 19;
	printf("&a:%d \n", a);

	return 0;
}