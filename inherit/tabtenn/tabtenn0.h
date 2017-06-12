#ifndef TABTENN_H   //写错了，导致编译没有通过
#define TABTENN_H
#include <string>
using std::string;

class TableTennisPlayer
{
private:
	string firstname;
	string lastname;
	bool   hashTable;

public:
	TableTennisPlayer(const string &fn = "none", const string &ln = "none", bool ht=false);
	void Name() const; //只读的一个函数
	bool HashTable() const {return hashTable;};
	bool ResetTable (bool v) { hashTable = v;};

};

class RatedPlayer: public TableTennisPlayer
{
private:
	unsigned int rating;
public:
	//两种构造函数，感觉好不一样，没有这样用过：想起来了，是基本的构造函数
	RatedPlayer(unsigned int r = 0, const string &fn = "none", const string &ln = "none", bool ht = false);

	//想起来了：是复制构造函数
	RatedPlayer(unsigned int r, const TableTennisPlayer &tp);
	
	unsigned int Rating() const {return rating;};
	void Reseat (unsigned int r){rating = r;};
};
#endif
