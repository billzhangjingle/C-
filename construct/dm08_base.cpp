#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
class A
{
public:
	A(int _a1)
	{
		a1 = _a1;
	}
protected:
private:
	int a1;
};

//���캯���ĳ�ʼ���б����ԭ��
//�﷨����
class B
{
	public:
		B():mya(12),mya2(100)
	{
		;
	}
		//��Ա�����ĳ�ʼ��˳����������˳����أ����ڳ�ʼ���б��е�˳���޹�
		//��仰��˼��˵��mya2 ���������ȳ�ʼ������ mya �����������ʼ����������ٳ�ʼ���� b1, �Լ������������ģ�billadd
		B(int x, int y):mya(y),mya2(101)
	{
		cout<<"const function"<<endl;
		b1 = x;
	}
	protected:
	private:
		int b1;
		A mya2;
		A mya;

};


int  main()
{
	A a1(10);
	B b1(10, 20);
	//system("pause");
	return 0;
}
