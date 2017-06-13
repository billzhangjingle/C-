#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class dwelling
{
public:
	virtual void showperks() const = 0;
	virtual void showperks(int a) const = 0; 
};

class hovel:public dwelling
{
public:
	virtual void showperks(int a) const; 
	virtual void showperks() const;
};

//void dwelling:: showperks() const 
//{
//	printf("nihdayed \n");
//}
//void dwelling:: showperks(int a) const 
//{
//	printf("aaaaaaa\n");
//}
//
void hovel :: showperks() const
{
	//dwelling::showperks();
	printf("bbbbb\n");
}

void hovel:: showperks(int a) const 
{
	printf("cccccccccccccccccccc\n");
}
int main()
{
	hovel trump;
	trump.showperks();
	trump.showperks(5);
	
	return 0;
}
