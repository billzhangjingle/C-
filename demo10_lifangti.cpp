//2016/6/5 21:00:44
//立方体的封装和设计
#include "iostream"
#include <stdio.h>
using namespace std;


class Cube
{
public:
	int setABC(int a, int b, int c)
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}
	
	
	
	int setA(int val)
	{
		m_a = val;
	}
	int getA()
	{
		return m_a;
	}
	
	int setB(int val)
	{
		m_b = val;
	}
	int getB()
	{
		return m_b;
	}
	
	int setC(int val)
	{
		m_c = val;
	}
	int getC()
	{
		return m_c;
	}
	
	int getV()
	{
		return m_a * m_b * m_c;
	}
	int getS()
	{
		return 2 *(m_a * m_b + m_a * m_c + m_b * m_c);
	}
	
	//全局函数变成类的内部函数
	int judge( Cube &c2)
	{
		if( m_a== c2.getA() && 
			m_b== c2.getB() &&
			m_c== c2.getC())
		{
		 	return 1;	
		}else {
				return 0;
		}	
	}
private:
	
	int m_a;
	int m_b;
	int m_c;
	int m_v;
	int m_s;
	
};




struct Teacher
{
	char name[32];
	int  age;
};

//c 语言的判断方法。全局函数
int judge(Cube &a, Cube &b)
{
	if( a.getA()== b.getA() && 
		a.getB()== b.getB() &&
		a.getC()== b.getC()){
		return 1;	
	}else {
		return 0;
	}
}

//c++ 的对象管理模型
int main(void)
{
	Cube c1, c2;
	
	c1.setABC(1, 2, 3);
	c2.setABC(2, 2, 4);

//最开始的方法。	
//	if(judge(c1, c2) == 1 ){
//		printf("eqal\n");
//	}else {
//		printf("not eqal\n");	
//	}

	int tag = c1.judge(c2);
	if( tag == 1){
		printf("eqal\n");
	}else {
		printf("not eqal\n");
	}

	return 0;
}