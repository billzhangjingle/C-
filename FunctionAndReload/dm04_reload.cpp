#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
//��������ص�ѧϰ
//��������ط�Ϊ����ģʽ
//1����ȫ�ֺ�����������Ԫ���������������friend ��ʵ��
//2��
class Complex 
{
public:
	Complex (int _a, int _b)
	{
		this->a = _a;
		this->b = _b;
	}
	~Complex()
	{
		cout<<"bye"<<endl;
	}
	void print()
	{
		cout<<"a"<<a<<"\tb:"<<b<<endl;	
	}

//friend Complex add(Complex &x, Complex &y); //��һ��ע��
//
friend Complex operator+(Complex &x, Complex &y);
protected:
private:
	int a;
	int b;
};


//Complex add(Complex &x, Complex &y) ��һ��ע��
//{
//	Complex c(x.a + y.a, x.b + y.b);
//	return c;
//}
Complex operator+(Complex &x, Complex &y)
{
	Complex c(x.a + y.a, x.b + y.b);
	return c;
}
int main()
{
	Complex c1(2,3), c2(3,4);
	c1.print();
	c2.print();
	//Complex c3 = add(c1, c2); ��һ��ע��
	//c3.print();
	//Complex c3 = operator+(c1, c2); ��һ��ʽ�����������ֵ��÷�ʽ����ͬ��
	Complex c3 = c1 + c2;
	c3.print();
	return 0;
}
