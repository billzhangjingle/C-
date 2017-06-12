#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

void outint(int n)
{
	std::cout<<n<< " ";
}
int main()
{
	using namespace std;
	lists<int > one(5, 2);
	
	int stuff[5] = {1, 2, 4, 8, 6};
	
	list<int> two ;
	int more[6] = {6, 4, 2, 4, 6, 5};
	two.insert(two.begin(), stuff, stuffd + 5);
	
	list<int> three(two);
	three.insert(three.end(), more, more + 6);
	
	cout<<"List one";
	for_each(one.begin(), one.end(), outint);
	
	cout<<endl<<"List two";	
	for_each(two.begin(), two.end(), outint);
	
	cout<<endl<<"List three";
	for_each(three.begin(), three.end(), outint);	
	
	three.remove(2);
	
	cout<<endl<<"List three minus 2s:";
	
	
	return 0;
}
