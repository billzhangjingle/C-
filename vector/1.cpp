#include <iostream>
#include <string>
#include <vector>

const int Num = 5;
int main()
{
	using std::vector;
	using std::string;
	using std::cin;
	using std::cout;
	using std::endl;
	vector<int > rating (Num);
	vector<string> titles(Num);

	cout<<"you will do exactly  as told, you will enter \n"
	<<Num <<"book titles and your rating (0-10)\n";
	
	int i;
	for(i = 0; i <Num; i++)
	{
		cout<<"enter title #"<<i +1<<":";
		getline(cin, titles[i]);
		cout<<"enter your rating(0-10):";
		cin>>rating[i];
		cin.get();
	}
	cout<<"Thank you, you enterd the folling :\n"
		<<"Rating \t Book\n";
	for( i = 0; i < Num; i++ )
	{
		cout<<rating[i]<<"\t "<<titles[i] << endl;
	}
	return 0;

}
