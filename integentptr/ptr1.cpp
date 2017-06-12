#include <memory>
#include <iostream>
#include <string>

void remodel(std::string &str)
{
	std::auto_ptr<std::string> ps (new std::string(str));

	if(weird_thing())
		throw exception();
	str = *ps;
	return ;
}
int main(void)
{
	
}
