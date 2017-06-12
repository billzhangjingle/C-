#include <iostream>
#include "tabtenn0.h"

int main(void)
{
	using std::cout;

	//
	TableTennisPlayer play1("zhang", "jingle", true);
	TableTennisPlayer play2("f", "aling", false);
	play1.Name();
	if(play1.HashTable()){
		cout<<"has table\n";
	}else {	
		cout<<"has not table\n";
	}
	play2.Name();	
	if(play2.HashTable()){
		cout<<"has table\n";
	}else {	
		cout<<"has not table\n";
	}
	return 0;	
}
