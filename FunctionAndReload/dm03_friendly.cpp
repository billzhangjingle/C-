#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//友元函数的例子
using namespace std;

//分为友元函数的例子
class A
{
public:
	A()
	{
		a = 100;
		b = 10;
	}
	friend class B; //这儿公私均可，常常用到的是变为私有变量
	int getA()
	{
		return a;
	}
	void printAB()
	{
		cout<<"a"<<a<<" b"<<b<<endl;
	}
	friend void setA(A *p, int _a); //友元函数的定义,friend 放在前面，记得友元函数的是将friend 放在函数的前面 第一种方式
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
//友元类的类的成员函数都是友元函数 2
void B:: setA( A *p, int _a)
{
	p->a = _a + 100;
	p->b = _a + 100;
}

//普通的友元函数  1
void setA(A *p, int _a)
{
	p->a = _a;
	p->b = _a;
}

class girl;
class boy
{
public:
	void display_girl(girl &x); //普通成员的函数的定义没有改变
	//{
	//	cout<<"girl-name"<<x.name<<"age"<<x.age<<endl;
	//}
};
class girl
{
public:	//当初这个没有写pulic 导致出现错误
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
	//friend class boy; //当初写代码的时候没有写class, 这是一个错误 ,友元的定义方式  第2
	friend void  boy::display_girl(girl &x); //允许某一个类的成员函数访问  第3种方式
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
