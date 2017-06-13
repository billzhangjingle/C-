#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class dwelling
{
public:
	virtual void showperks() const ;
	virtual void showperks(int a)const ; 
};

class hovel:public dwelling
{
public:
	 virtual void showperks() const;
	 virtual void showperks(int a)const ; 
};

void dwelling:: showperks() const 
{
	printf("nihdayed \n");
}

void dwelling:: showperks( int a) const 
{
	printf("nihdayedaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa \n");
}
void hovel :: showperks() const
{
	dwelling::showperks();
	//printf("bbbbb\n");
}

//void hovel:: showperks(int a) const 
//{
//	printf("cccccccccccccccccccc\n");
//}
int main()
{
	hovel trump;
	trump.showperks();
	trump.showperks(2);
	
	return 0;
}
