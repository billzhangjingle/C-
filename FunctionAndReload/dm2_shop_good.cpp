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
	//Ϊʲô���� �δ����أ�front Ϊʲô���ǿ���
	Goods *tmp_good = new Goods(w);
	tmp_good->next = NULL;
	// �������д�ĵ��ں�
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
	//�Ӷ��㿪ʼɾ��
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
