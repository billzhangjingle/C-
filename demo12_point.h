//2016/6/5 21:26:37
//点类和园类
//判断点和圆的关系
#pragma once
//点类
class Point
{
public:
	void setP( int x, int y);
	void setX(int val);
	void setY(int val);
	int  getX();
	int  getY();
private:
	int x0;
	int y0;	
};
