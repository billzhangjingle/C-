//2016/6/5 22:01:56
//�����԰��
//�жϵ��Բ�Ĺ�ϵ
#include "iostream"
#include "demo12_point.h"
#include <stdio.h>
using namespace std;

//�����ʵ��
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

