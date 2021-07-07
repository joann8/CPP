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

	filter["debug"] = 1;
	filter["info"] = 2;
	filter["warning"] = 3;
	filter["error"] = 4;

	switch (filter[av[1]])
	{	
		case 1:
		{	std::cout << "[DEBUG]" << std::endl;
			karen.complain("debug");
		}
		case 2:
		{
			std::cout << "[INFO]" << std::endl;
			karen.complain("info");
		}
		case 3:
		{
			std::cout << "[WARNING]" << std::endl;
			karen.complain("warning");
		}
		case 4:
		{
			std::cout << "[ERROR]" << std::endl;
			karen.complain("error");
			break ;
		}
		default:
		{
			std::cout << "[NIMP]" << std::endl;
			std::cout << "[ Probablement plainte de problèmes insignifiants ]" << std::endl;
		}
	}	
	return (0);
}
