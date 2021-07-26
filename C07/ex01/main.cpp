#include "iter.hpp"

int main(void)
{
    std::string	strs[5] = {"abc", "def", "efg", "hij", "klm"};
    int			nbs[5] = { 1,2, 3, 4, 5};
	
	iter(strs, 5, &print_function);
    iter(nbs, 5, &print_function);
    return 0;
}
