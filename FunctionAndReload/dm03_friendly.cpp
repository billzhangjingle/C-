#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//��Ԫ����������
using namespace std;

//��Ϊ��Ԫ����������
class A
{
public:
	A()
	{
		a = 100;
		b = 10;
	}
	friend class B; //�����˽���ɣ������õ����Ǳ�Ϊ˽�б���
	int getA()
	{
		return a;
	}
	void printAB()
	{
		cout<<"a"<<a<<" b"<<b<<endl;
	}
	friend void setA(A *p, int _a); //��Ԫ�����Ķ���,friend ����ǰ�棬�ǵ���Ԫ�������ǽ�friend ���ں�����ǰ�� ��һ�ַ�ʽ
protected:
private:
	int a;
	int b;
	static int module;

};

int A::module = 10;
class B
{
public:
	void setA(A *p, int _a);
	void displayA(A *p)
	{
		cout<<p->a<<"ddddd"<<endl;
	}
protected:
	
private:
};
//��Ԫ�����ĳ�Ա����������Ԫ���� 2
void B:: setA( A *p, int _a)
{
	p->a = _a + 100;
	p->b = _a + 100;
}

//��ͨ����Ԫ����  1
void setA(A *p, int _a)
{
	p->a = _a;
	p->b = _a;
}

class girl;
class boy
{
public:
	void display_girl(girl &x); //��ͨ��Ա�ĺ����Ķ���û�иı�
	//{
	//	cout<<"girl-name"<<x.name<<"age"<<x.age<<endl;
	//}
};
class girl
{
public:	//�������û��дpulic ���³��ִ���
girl()
	{
		name = NULL;
		name = new char[10];
		if( NULL !=name)
		{
			strcpy(name,"fal");
		}
		age = 26;
	}

	~girl()
	{
		if( NULL != name){
			//free(name);
			delete [] name;
		}
		
	}
private:
	char *name;
	int age;
	//friend class boy; //����д�����ʱ��û��дclass, ����һ������ ,��Ԫ�Ķ��巽ʽ  ��2
	friend void  boy::display_girl(girl &x); //����ĳһ����ĳ�Ա��������  ��3�ַ�ʽ
};
void boy::display_girl(girl &x)
{
	cout<<"girl-name:"<<x.name<<"\t age:"<<x.age<<endl;
}
int main(void)
{
	A testa;
	B testB;
	girl fal;
	boy zjl;
	zjl.display_girl(fal);
	testB.setA(&testa, 10);
	cout<<"aa"<<testa.getA()<<endl;
	setA(&testa, 6);
	cout<<"bb"<<testa.getA()<<endl;
	return 0;
}
