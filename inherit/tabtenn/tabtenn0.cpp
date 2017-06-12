#include <string>
#include <iostream>   //这个头文件当初没有包含
#include "tabtenn0.h"
//using std::cout;

//疑问是 构造函数的几种用法，很久不用又忘记了
//eg1 利用初始化列表初始化变量，有什么好处着，又忘记了
//`TableTennisPlayer ::TableTennisPlayer(const string &fn , const string &ln , bool ht):firstname(fn),lastname(ln),hashTable(ht){}

//eg2
TableTennisPlayer ::TableTennisPlayer(const string &fn , const string &ln, bool ht)
{
	firstname = fn;
	lastname  = ln;
	hashTable = ht;
}


//函数的实现，为什么要这样写const ,c 语言中const 好像不能修饰函数吧
//为了区分c++ 和c语言，说明这个函数对变量只做了读取操作？
void TableTennisPlayer ::Name() const
{
	std::cout<<firstname<<" ,"<<lastname;
}
//TableTennisPlayer是初始化列表，调用相应的构造函数 TableTennisPlayer(fn, ln, ht)
RatedPlayer::RatedPlayer(unsigned int r, const string &fn, const string &ln, bool ht):TableTennisPlayer(fn, ln, ht)
{	
	rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer &tp) :TableTennisPlayer(tp),rating(r)
{

}

