#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

//�Լ�û�뵽���ǹ��캯����ʱ��ӣ� ������ʱ�������ֵ�ļ���
//��������ʦ���ʱ��ΪʲôҪ��һ��next ��ָ���أ�Ӧ����Ҫ�����������������е��ð�
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
