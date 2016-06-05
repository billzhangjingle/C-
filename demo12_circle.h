//2016/6/5 22:01:56
//点类和园类
//判断点和圆的关系
#pragma once
#include "demo12_point.h"
//圆类的封装和设计
class Circle
{
public:
	void setCir(int x, int y, int r);
	void judge(int x0, int y0);
	void judge(Point &p);
	
private:
	int x1;
	int y1;
	int r1;
};
