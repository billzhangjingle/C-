//2016/6/5 22:01:56
//�����԰��
//�жϵ��Բ�Ĺ�ϵ
#include "iostream"
#include "demo12_circle.h"
#include <stdio.h>
using namespace std;

//Բ��ķ�װ����� ��ʵ��
void  Circle ::setCir(int x, int y, int r)
{
	x1 = x;
	y1 = y;
	r1 = r;
}

void Circle ::judge(int x0, int y0)
{
	int a = (x1 - x0)* (x1 - x0) + (y1 -y0) *(y1 - y0) - r1*r1;
	
	if( a > 0){
		printf("out circle\n");	
	}else {
		printf("in circle\n");	
	}
}
void Circle ::judge(Point &p)
{
	int a = (x1 - p.getX())* (x1 - p.getX()) + (y1 -p.getY()) *(y1 - p.getY()) - r1*r1;
	
	if( a > 0){
		printf("out circle\n");	
	}else {
		printf("in circle\n");	
	}
}
