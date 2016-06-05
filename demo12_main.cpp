//2016/6/5 21:26:37
//点类和园类
//判断点和圆的关系
#include "iostream"
#include "demo12_circle.h"
#include "demo12_point.h"
#include <stdio.h>
using namespace std;

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