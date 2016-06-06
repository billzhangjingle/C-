//2016/6/5 22:01:56
//点类和园类
//判断点和圆的关系
#include "iostream"
#include "demo12_point.h"
#include <stdio.h>
using namespace std;

//点类的实现
void Point::setP( int x, int y)
{
	x0 = x;
	y0 = y;	
}

void Point::setX(int val)
{
	x0 = val;
}

void Point::setY(int val)
{
	y0 = val;	
}

int  Point::getX()
{
	return x0;
}

int Point:: getY()
{
	return y0;
}

