#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
//初始化列表的相关文章 http://www.cnblogs.com/graphics/archive/2010/07/04/1770900.html
struct Test1
{
    Test1(int a):i(a){}
    int i ;
};

//struct Test1
//{
//    Test1() // 无参构造函数
//    { 
//        cout << "Construct Test1" << endl ;
//    }
//
//    Test1(const Test1& t1) // 拷贝构造函数
//    {
//        cout << "Copy constructor for Test1" << endl ;
//        this->a = t1.a ;
//    }
//
//    Test1& operator = (const Test1& t1) // 赋值运算符
//    {
//        cout << "assignment for Test1" << endl ;
//        this->a = t1.a ;
//        return *this;
//    }
//
//    int a ;
//};
//
struct Test2
{
    Test1 test1 ;
    Test2(Test1 &t1)
    {
		//在此的时候 肯定是需要默认构造函数 和 赋值运算函数，在c++编译的时候能知知道Test1无默认构造函数，在编译的时候就会出错
        test1 = t1 ;
    }
};
//用的简单版的Test1 就会编译不通过

//struct Test2
//{
//    Test1 test1 ;
//    Test2(Test1 &t1):test1(t1){}
//};
//用简单版的Test1 使用这个就可以编译通过，因为直接调用拷贝构造函数，不会调用默认构造函数
int main()
{
	Test1 t1(2);
	//Test1 t1;
	Test2 t2(t1);
	return 0;
}
