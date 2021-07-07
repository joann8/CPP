#include "Zombie.hpp"
#include <ctime>
#include <cstdlib>

std::string	randomName(void)
{
	std::string	name []= {"R_Bernard", "R_Alicia", "R_Suzy", "R_Annouk", "R_Jacob", "R_Georgie", "R_Samuel", "R_Kirikou", "R_Fionna", "R_Luc"};
	return name[rand() % 10]; 
}

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

	srand(time(NULL));
	horde[0].set_name(name);
	int i = 1;
	while (i < N)
	{
		horde[i].set_name(randomName());
		i++;
	}
	return horde;
}
