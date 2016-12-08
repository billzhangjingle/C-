#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
//经打印，值都是12 说明静态变量不属于这个对象
//
class C1
{
public:
	int i; //4
	int j; //4
	int k; //4
protected:
private:
}; //12

class C2
{
public:
	int i; //4
	int j; //4
	int k; //4

	static int m; //4
public:
	int getK() const { return k; } //4
	void setK(int val) { k = val; } //4

protected:
private:
}; //24 16 12

int main()
{
	C2 c21,c22,c23;
	c21.getK();
	c22.getK();
	printf("sizeof(C1):%d \n", sizeof(C1));
	printf("sizeof(C2):%d \n", sizeof(C2));
	return 0;
}
