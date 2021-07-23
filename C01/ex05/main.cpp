#include "Karen.hpp"

int main()
{
	Karen karen;

	std::cout << "[INFO]" << std::endl;
	karen.complain("INFO");
	std::cout << "[DEBUG]" << std::endl;
	karen.complain("DEBUG");
	std::cout << "[WARNING]" << std::endl;
	karen.complain("WARNING");
	std::cout << "[ERROR]" << std::endl;
	karen.complain("ERROR");
	std::cout << "[NIMP]" << std::endl;
	karen.complain("blabla");
	

	return (0);
}
