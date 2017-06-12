#include <iostream>
#include <string>
#include <vector>
/*sort begin end
 * erase()
 * insert()
 * swap();速度快
 * size(), begin(), end(), push_back();erase()
 * insert()
 * */
struct Review
{
	std::string title;
	int rating;
};

bool FileReview(Review &rr);
void ShowReview(const Review &r);

int main()
{
	using std::cout;
	using std::vector;
	vector<Review> books;
		
	Review temp;
	while(FileReview(temp))	
		books.push_back(temp);

	int num = books.size();
	
	if(num > 0)
	{
		cout<<"thank you ,you entered the folling:\n"
			<<"Rating \t books\n";
		for( int i ; i < num; i++)
		{
			ShowReview(books[i]);
		}
		
		cout<<"Repring:\n"
			<<"Rating\t Books\n";
		vector<Review>::iterator pr;
		for(pr = books.begin(); pr != books.end(); pr++)
			ShowReview(*pr);	
		vector<Review> oldlis(books);
		
		if(num > 3)
		{
			books.erase(books.begin()+1, books.begin() +3);
			cout<<"After erasure:\n";
			for(pr = books.begin(); pr != books.end(); pr++)
				ShowReview(*pr);
			books.insert(books.begin(), oldlis.begin() +1, oldlis.begin() +2);
			cout<<"After inseration:\n";
			for( pr = books.begin(); pr != books.end(); pr++ )
				ShowReview(*pr);
		}
		books.swap(oldlis);
		cout<<"swap oldlist with books:\n";
		for(pr = books.begin() ; pr != books.end(); pr++)
			ShowReview(*pr);	
	}else
	{
		cout<<"Nothing entered, nothing gained.\n";
	}
	
	return 0;
}

bool FileReview(Review &rr)
{
	std::cout<<"Plese input the tiles :quit to quit:\n";
	std::getline(std::cin, rr.title);

	if(rr.title == "quit")
	{
		return false;	
	}

	std::cout<<"enter books rating:";
	std::cin>>rr.rating;
	
	//i dont know the meanging 
	if(!std::cin)
	{
		return false;	
	}
	
	while(std::cin.get() != '\n')
		continue;
	return true;
}

void ShowReview(const Review &rr)
{
	std::cout<<"title:"<<rr.title<<"\t rating:"<<rr.rating<<std::endl;
}

