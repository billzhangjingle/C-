#include <memory>
#include <string>
#include <iostream>

class Report
{
private:
	std::string str;
public:
	Report(const std::string s ):str(s)
	{std::cout <<"object create\n";};
	
	~Report() {std::cout <<"object delete \n";}
	
	void comment() const {std::cout <<str<<"\n";}
};

int main()
{	
	{
		std::auto_ptr<Report> ps (new Report("using auto_ptr"));
		ps->comment();
	}
	
//	{
//		std::shared_ptr<Report> ps (new Report("using shared_pr"));
//		ps->comment();
//	}
//	{
//		std::unique_ptr<Report> ps (new Report("using unique"));
//		ps->comment();
//	}
	return 0;
}
