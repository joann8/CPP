#include "Karen.hpp"

int main()
{
	Karen karen;

	std::cout << "[INFO]" << std::endl;
	karen.complain("info");
	std::cout << "[DEBUG]" << std::endl;
	karen.complain("debug");
	std::cout << "[WARNING]" << std::endl;
	karen.complain("warning");
	std::cout << "[ERROR]" << std::endl;
	karen.complain("error");
	std::cout << "[NIMP]" << std::endl;
	karen.complain("nimp");
	

	return (0);
}
