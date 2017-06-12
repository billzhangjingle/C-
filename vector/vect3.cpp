#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

/*for_each
 * random_shuffle()
 * sort()
 * */

struct Review
{
	std::string title;
	int rating;
};

bool operator<(const Review &r1, const Review &r2);
bool worseThan(const Review &r1, const Review &r2);

bool FillReview(Review &rr);
void ShowReview(const Review &rr);

int main()
{
	using namespace std;
	
	vector<Review> books;

	Review temp;
	while(FillReview(temp))
		books.push_back(temp);

	if(books.size() > 0)
	{
		cout<<"Thank you entered the folling:book_size"
			<<books.size()<<"rating:\n"<<"Rating\t Books\n";
		
		for_each(books.begin(), books.end(), ShowReview);

		sort(books.begin(), books.end());
		cout<<"Sorted by title :\n Rating \t Book\n";
		for_each(books.begin(), books.end(), ShowReview);
		
		sort(books.begin(), books.end(), worseThan);
		cout<<"sorted by rating :\nRating\t Books\n";
		
		for_each(books.begin(), books.end(), ShowReview);
		
		//random_shuffle(books.begin(), books.end(), ShowReview);
		random_shuffle(books.begin(), books.end());
		cout<<"After shuffing :\n Rating\t Books\n";
		for_each(books.begin(), books.end(), ShowReview);
	}else{
		cout<<"no entries. bye\n";
	}

	return 0;
}

bool operator<(const Review &r1, const Review &r2)
{
	if(r1.title <r2.title)
		return true;
	else if( r1.title == r2.title && r1.rating <r2.rating)
		return true;
	else
		return false;
}

bool worseThan(const Review &r1, const Review &r2)
{
	if(r1.rating < r2.rating)
		return false;
	else 
		return true;
}

bool FillReview(Review &rr)
{
	std::cout<< "enter book title quit to quit\n";
	std::getline(std::cin, rr.title);
	if(rr.title == "quit")
		return false;
	
	std::cout<<"enter book rating:";
	std::cin>>rr.rating;
	if(!std::cin)
		return false;
	
	while(std::cin.get() != '\n')
		continue;
	
	return true;
}

void ShowReview(const Review &rr)
{
	std::cout<<rr.rating<<"\t" <<rr.title<<std::endl;
}
