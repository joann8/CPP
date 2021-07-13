#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen							karen;
	std::map<std::string, int>		filter;

	if (ac != 2)
	{
		std::cout << "Parsing Error" << std::endl;
		return (1);
	}

	filter["DEBUG"] = 1;
	filter["INFO"] = 2;
	filter["WARNING"] = 3;
	filter["ERROR"] = 4;

	switch (filter[av[1]])
	{	
		case 1:
		{	std::cout << "[DEBUG]" << std::endl;
			karen.complain("debug");
			std::cout << std::endl;
		}
		case 2:
		{
			std::cout << "[INFO]" << std::endl;
			karen.complain("info");
			std::cout << std::endl;
		}
		case 3:
		{
			std::cout << "[WARNING]" << std::endl;
			karen.complain("warning");
			std::cout << std::endl;
		}
		case 4:
		{
			std::cout << "[ERROR]" << std::endl;
			karen.complain("error");
			std::cout << std::endl;
			break ;
		}
		default:
		{
			std::cout << "[ Probablement plainte de problèmes insignifiants ]" << std::endl;
		}
	}	
	return (0);
}
