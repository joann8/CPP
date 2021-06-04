#include "Convert.hpp"

int main(int ac, char **av)
{
	if (ac != 2 || av[1][0] == '\0')
	{
		std::cout << "Expected format: ./convert <str>" << std::endl;
		return (1);
	}
	else
	{
		std::cout << std::setprecision(1) << std::fixed;
		Convert pgm(av[1]);
		pgm.find_type();
		pgm.print_type();
	}
	return (0);
}
