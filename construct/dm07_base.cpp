#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
//�ص�����������Լ�д�ˣ��������Ͳ������ṩ�ˡ�
class Test
{
public:
	//�����д��copy���캯������ô�������������ṩ�޲ι��캯��
	Test(Test &obj)
	{
		cout<<"����copy���캯�� 1 "<<endl;
		//a = 1;
		//b = 2;
	}
	//�����д���вλ����޲ι��캯������ô������Ҳ�����ṩ�޲ι��캯��
	Test(int _a, int _b)
	{
		cout<<"����copy���캯�� 2"<<endl;
		//a = 1;
		//b = 2;
	}
protected:
private:
	int a ;
	int b;
};

int main()
{
	//�����ʧ�ܣ���Ϊ�����ṩĬ�ϵĹ�������ˡ�
	//Test t1;
	
	// copy 2	
	Test t2(1,2);
	
	//copy 1
	Test t3 = t2;
	//system("pause");
	return 0;
}
