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
	//const����ָ����ָ�ڴ�ռ䲻�ܱ��޸�
	//p->age = 10;
}

void printTe2( Teacher * const p)
{
	//const����ָ�� p�������ܱ��޸�
	//p = NULL; //err
}


void printTe3( const Teacher * const p)
{
	//const����ָ�� p�������ܱ��޸�
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
	*myp = p; //��ӵ��޸���ʵ�ε�ֵ������������Ҫ��֤���ʵ���ܱ��޸ģ�����
}
void main()
{
	char buf[20];
	getMem(&buf);

	system("pause");
}
*/

//c++���棬const������һ��ð��void main()
int  main()
{	//c�����const��һ��ð�ƻ�
	const int a = 10;
	//a = 11; ֱ���޸�a������

	int *p = (int *)&a;
	*p = 11; //���Ǽ���޸�a����
	printf("a: %d \n", a);
	
	//*p��10 ��������˵��p��&a�󶨵ĺ���������
	//*p��11.��������˵��*p��ָ���ڴ�ռ��&a,��һ��������
	printf("*p :%d\n", *p);

	printf("&a: %d \n", &a);
	printf("p: %d \n", p);

}
