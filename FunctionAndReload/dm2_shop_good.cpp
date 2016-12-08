#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

//自己没想到的是构造函数的时候加， 析构的时候进行数值的减，
//王宝明老师想的时候，为什么要有一个next 的指针呢，应该是要在买卖的类中来进行调用吧
class Goods
{
public:
	Goods(int m)
	{
		weight = m;
		total_weight += m;
	}
	~Goods()
	{
		total_weight -= weight;
		cout<<"destory Goods"<<endl;
	}
	int GetWeigth()
	{
		return weight;
	}
	static GetTotalWeigth()
	{
		return total_weight;
	}
protected:
private:
	int weight;
	static int total_weight;
};

//class  Shop
//{
//public:
//	Shop()
//	{
//		
//	}
//	~Shop()
//	{
//		
//	}
//protected:
//private:
//		
//};
