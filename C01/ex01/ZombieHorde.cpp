#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << "\"" << N << "\" is not enough to create a propre horde." << std::endl;
		return (NULL);
	}
	std::cout << "Let's create a horde of " << N << " zombies." << std::endl << std::endl;
	
	Zombie *horde = new Zombie[N];
	std::cout << std::endl;

	int i = 0;
	while (i < N)
	{
		horde[i].set_name(name);
		i++;
	}
	return horde;
}
