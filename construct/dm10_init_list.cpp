#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
//��ʼ���б��������� http://www.cnblogs.com/graphics/archive/2010/07/04/1770900.html
struct Test1
{
    Test1(int a):i(a){}
    int i ;
};

//struct Test1
//{
//    Test1() // �޲ι��캯��
//    { 
//        cout << "Construct Test1" << endl ;
//    }
//
//    Test1(const Test1& t1) // �������캯��
//    {
//        cout << "Copy constructor for Test1" << endl ;
//        this->a = t1.a ;
//    }
//
//    Test1& operator = (const Test1& t1) // ��ֵ�����
//    {
//        cout << "assignment for Test1" << endl ;
//        this->a = t1.a ;
//        return *this;
//    }
//
//    int a ;
//};
//
struct Test2
{
    Test1 test1 ;
    Test2(Test1 &t1)
    {
		//�ڴ˵�ʱ�� �϶�����ҪĬ�Ϲ��캯�� �� ��ֵ���㺯������c++�����ʱ����֪֪��Test1��Ĭ�Ϲ��캯�����ڱ����ʱ��ͻ����
        test1 = t1 ;
    }
};
//�õļ򵥰��Test1 �ͻ���벻ͨ��

//struct Test2
//{
//    Test1 test1 ;
//    Test2(Test1 &t1):test1(t1){}
//};
//�ü򵥰��Test1 ʹ������Ϳ��Ա���ͨ������Ϊֱ�ӵ��ÿ������캯�����������Ĭ�Ϲ��캯��
int main()
{
	Test1 t1(2);
	//Test1 t1;
	Test2 t2(t1);
	return 0;
}
