#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

using std::string;
const int Num = 26;

const string wordlist[Num] = {"apiary", "beetle", "cereal","danger", "remote"};

int main()
{
	using std::cout;
	using std::cin;
	using std::tolower;
	
	using std::endl;
	
	std::srand(std::time(0));
	char play;

	cout<<"will you play a word game?<y/n>";
	cin play;
	play = tolower()
	return 0;
}
