#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
//��������ص�ѧϰ
//��������ط�Ϊ����ģʽ
//1����ȫ�ֺ�����������Ԫ���������������friend ��ʵ��
//2������һ���������Ա������ʵ�ֵ�
class Complex 
{
public:
	friend ostream& operator<<(ostream &out, Complex &c1);
	friend Complex operator+(Complex &c1, Complex &c2);
	friend Complex operator*(Complex &c1, Complex &c2);
	//friend Complex& operator++(Complex &c1); //ǰ��++ ++c1 ����Ԫ����
	Complex & operator++()
	{
		this->a++;
		this->b++;
		return *this;
	}
	Complex  operator++(int)
	{
		Complex tmp = *this;
		this->a++;
		this->b++;
		return tmp;
	}
	Complex (int _a, int _b)
	{
		this->a = _a;
		this->b = _b;
	}
	~Complex()
	{
		cout<<"bye"<<endl;
	}
	Complex operator-(Complex &c2)
	{
		Complex tmp(a - c2.a, this->b - c2.b);
		return tmp;
	}
	void print()
	{
		cout<<"a"<<a<<"\tb:"<<b<<endl;	
	}

protected:
private:
	int a;
	int b;
};

Complex operator*(Complex &c1, Complex &c2)
{
	Complex c(c1.a * c2.a , c1.b * c1.b);
	return c;
}
//�������� ȫ�ֺ���ʵ��++ �������������
//Complex& operator++(Complex &c1)
//{
//	c1.a++;
//	c1.b++;
//	return c1;
//}

Complex operator+(Complex &x, Complex &y)
{
	Complex c(x.a + y.a, x.b + y.b);
	return c;
}

//�����Ļ���֧����ʽ���
ostream& operator<<(ostream &out, Complex &c1)
{
	out<<"a:"<<c1.a<<"\t b:"<<c1.b<<endl;
	return out;
}
int main()
{
	Complex c1(2,3), c2(3,4);
	c1.print();
	c2.print();
	Complex c3 = c1 + c2;
	++c3;//�������� ��ȫ�ֵķ���
	cout<<c3<<c1;//֧����ʽ��̡�
	c3++;
	c3.print();
	cout<<c3;
	return 0;
}
