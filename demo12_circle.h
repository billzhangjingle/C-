//2016/6/5 22:01:56
//�����԰��
//�жϵ��Բ�Ĺ�ϵ
#pragma once
#include "demo12_point.h"
//Բ��ķ�װ�����
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
