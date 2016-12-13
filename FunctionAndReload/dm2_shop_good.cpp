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
	static  int GetTotalWeigth()
	{
		return total_weight;
	}
	Goods  *next;
protected:
private:
	int weight;
	static int total_weight;
};

int Goods:: total_weight = 0;
void buy( Goods * &front, Goods * &rear, int w)
{
	if(w < 0){
		return;		
	}	
	//为什么会有 段错误呢？front 为什么不是空呢
	Goods *tmp_good = new Goods(w);
	tmp_good->next = NULL;
	// 当初这儿写的等于号
	if( NULL == front ) {
		front = rear = tmp_good;
	}else {
		rear->next = tmp_good;
		rear       = rear->next;
	}
	
}

void sale(Goods *&front , Goods * &rear)
{
	if( front == NULL){
		cout<<"no googs"<<endl;
		return;
	}
	//从顶点开始删除
		Goods *dele = front;   
		front = front->next;
		delete  dele;
}
int main()
{
	Goods *front = NULL, *rear = NULL;
	//buy(front, rear, 1);
	//sale(front, rear);
	int weight;
	int cmd;
	do{
		cout<<"please input choice"<<endl;
		cout<<"1 for buy, 2 for sale, 0 for exit"<<endl;
		cin>>cmd;
		switch(cmd)
		{
			
		case 1:	
			cout<<"please input weight"<<endl;
			cin>>weight;
			buy(front, rear, weight);
		break;
	
		case 2:
			sale(front, rear);		
			break;
		case 0:
			cout<<"quit"<<endl;
			  break;
		}	
		cout<<"total weight"<<Goods::GetTotalWeigth()<<endl;
	}while(cmd);
	return 0;
}
