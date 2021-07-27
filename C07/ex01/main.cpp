#include "iter.hpp"

int main(void)
{
    std::string	strs[5] = {"abc", "def", "efg", "hij", "klm"};
    int			nbs[5] = { 1,2, 3, 4, 5};
	std::string	cars = "abcde";

	std::cout << "***STR***" << std::endl;
	iter(strs, 5, &print_function);
	std::cout << std::endl << "***INT***" << std::endl;
    iter(nbs, 5, &print_function);
	std::cout << std::endl << "***CHAR***" << std::endl;
    iter(cars.c_str(), 5, &print_function);
    return 0;
}
