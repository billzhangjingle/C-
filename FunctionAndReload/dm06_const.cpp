#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

//const ���÷�

class Test
{
public:
	Test()
	{
		a = 100;
		b = 200;
	}
	const int A()   //const ����this ָ�� 
	//int A()   const // const ���γ�Ա���ڴ�
	{ 
		//�۵�1��const������a,����ͨ�����ԣ����Ƿ��֣�b++Ҳ���ܱ���ͨ��
		//		//��˵����const��a �� b�������ˡ�������
		//
		//				//��������Ϊthis��Ϊ�����ĵ�һ�������������ء�������constû�еط��š�������
		//
		//const������this
		a ++;
		//b++;
		return a; 
	}
	void A(int val) 
	{ 
		a = val; 
	}

	int BBB()
	{

		return a;
	}

protected:
private:
	int a;
	int b;
};


int Aaaaa(const Test *pthis) 
{ 
	return 10; 
}
int  main()
{
	Test t1;
	t1.A(3);
	t1.A();
	cout<<t1.BBB()<<endl;
	return 0;
}
