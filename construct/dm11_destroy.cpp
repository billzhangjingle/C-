#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
//һ���������ȵ��ó�Ա�Ĺ��캯����Ȼ���ٵ����������Ĺ��캯��
//����������˳��͹��캯����˳�������෴
class ABCD 
{
public:
	ABCD(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		printf("ABCD() construct, a:%d,b:%d,c:%d  \n", this->a, this->b, this->c);
	}
	~ABCD()
	{
		printf("~ABCD() construct,a:%d,b:%d,c:%d  \n", this->a, this->b, this->c);
	}
	int getA() 
	{
		return this->a;
	}
protected:
private:
	int a;
	int b;
	int c;
};


class MyE
{
public:
	MyE():abcd1(1,2,3),abcd2(4,5,6),m(100)
	{
		cout<<"MyD()"<<endl;
	}
	~MyE()
	{
		cout<<"~MyD()"<<endl;
	}
	MyE(const MyE & obj):abcd1(7,8,9),abcd2(10,11,12),m(100)
	{
		printf("MyD(const MyD & obj)\n");
	}

protected:
//private:
public:
	ABCD abcd1; //��û��Ĭ�Ϲ��캯��������£�c++��������֪����ι���abc1������õĳ�ʼ���б�����������г�ʼ��
	ABCD abcd2;
	const int m;

};

int doThing(MyE mye1)
{
	printf("doThing() mye1.abc1.a:%d \n", mye1.abcd1.getA()); 
	return 0;
}

int run2()
{
	MyE myE;
	doThing(myE);
	return 0;
}

//
int run3()
{
	printf("run3 start..\n");

	ABCD abcd = ABCD(100, 200, 300);  //�����run3() ����֮���ٽ�������
	//��ֱ�ӵ��ù��캯����
	//����ù��캯����abc��������ٸ��ƣ�������
	//�ڹ��캯�������������һ�����캯��������ʲô����� ���һ������Կ�����һ������dm12.cpp 
	//ABCD(400, 500, 600); //��ʱ�������������,C++�ṹ��һ����ʱ���󣬵�������û���õ�����ֱ�Ӹ�����������ӡ�����������������
	printf("run3 end\n");
	return 0;
}

int main()
{
	//run2();
	cout<<"run 2"<<endl;
	run3();
	cout<<"run 3"<<endl;
	return 0;
}


