//2016/6/6 21:23:36
//���캯���ĳ����÷�
#include "iostream"
#include <stdio.h>
using namespace std;

class Test
{
public:
	Test()
	{
		a = 10;
	}
	
	//�вι��캯��
	//����Ӧ�ó���
	Test(int val)
	{
		a = val;
	}
	
	Test(const Test &ojb)
	{
		
	}
	
private:
	int a;
};

int main(void)
{
	//�вι��캯���������÷�
	//() ���ź�= �Ѿ���c++ �����ֽš�
	Test t1(10);
	Test t2 = 11;//
	Test t3 = Test(12);//�Զ������ֶ����á�
	
	
	return 0;
}
