//2016/6/5 21:26:37
//点类和园类
//判断点和圆的关系
#include "iostream"
#include <stdio.h>
using namespace std;

//点类
class Point
{
public:
	void setP( int x, int y)
	{
		x0 = x;
		y0 = y;	
	}
	
	void setX(int val)
	{
		x0 = val;
	}
	
	void setY(int val)
	{
		y0 = val;	
	}
	
	int  getX()
	{
		return x0;
	}
	
	int  getY()
	{
		return y0;
	}
private:
	int x0;
	int y0;	
};

//圆类的封装和设计
class Circle
{
public:
	void setCir(int x, int y, int r)
	{
		x1 = x;
		y1 = y;
		r1 = r;
	}
	
	void judge(int x0, int y0)
	{
		int a = (x1 - x0)* (x1 - x0) + (y1 -y0) *(y1 - y0) - r1*r1;
		
		if( a > 0){
			printf("out circle\n");	
		}else {
			printf("in circle\n");	
		}
	}
	void judge(Point &p)
	{
		int a = (x1 - p.getX())* (x1 - p.getX()) + (y1 -p.getY()) *(y1 - p.getY()) - r1*r1;
		
		if( a > 0){
			printf("out circle\n");	
		}else {
			printf("in circle\n");	
		}
	}
	
private:
	int x1;
	int y1;
	int r1;
};

int main(void)
{
	Point p;
	p.setP(1, 2);
	
	Circle c1;
	c1.setCir(2, 2, 2);
	//c1.judge(1, 2);
	c1.judge(p);
	return 0;
}