#include <iostream>
#include <cstring>

int main()
{
	std::string str="HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str_ptr = |" << *stringPTR << "|" << std::endl;
	std::cout << "str_ref = |" << stringREF << "|" << std::endl;

	return (0);
}
