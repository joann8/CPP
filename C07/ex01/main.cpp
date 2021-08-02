#include "iter.hpp"

int main(void)
{
    std::string	strs[5] = {"abc", "def", "efg", "hij", "klm"};
    int			nbs[7] = { 1, 2, 3, 4, 5, 6, 7};
	std::string	cars = "hello world";

	std::cout << "***STR 5***" << std::endl;
	iter(strs, 5, &print_function);
	std::cout << std::endl << "***INT 7***" << std::endl;
    iter(nbs, 7, &print_function);
	std::cout << std::endl << "***CHAR 11***" << std::endl;
    iter(cars.c_str(), 11, &print_function);
    
	std::cout << std::endl << "***Just an address 2***" << std::endl;
	std::string	strs2[2];
	iter(strs2, 2, &print_function);
    return 0;
}
