//2016/6/5 20:45:05
//��ķ�װ�͵��õķ�����
#include "iostream"
#include <stdio.h>
using namespace std;




//���ڴ�����֮��������ڲ�
//������֮��������ⲿ

//public: ����������ڲ�ʹ�ã�Ҳ����������ⲿʹ�á�

//private:˽�����Ժͷ�����ֻ��������ڲ�ʹ�ã��������ⲿʹ�á�

//struct Ĭ���� public�ģ�class Ĭ����private�ġ�
//����һ���������ͣ�������һ������


class Circle
{
public:
	double r;
	double s;
public:
	double getR()
	{
		return r;
	}
	
	void setR(double val)
	{
		r = val;
	}
	//���ӹ��ܵ�ʱ����������ķ�����
	double getS()
	{
		s = 3.14*r*r;
		return s;
	}
protected:
	
			
};

//���������Ҫ�Ǽӹ���
//���������Ҫ�Ǽӹ�����
int main(void)
{
	//ͨ���ඨ����� ����
	Circle c1, c2;
	c1.setR(10);
	cout <<"" << c1.getS()<<endl;
	
	//c++ �����������֪��c1 c2 ������gets �ĺ�����
	
	return 0;
}