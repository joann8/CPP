#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <ctime>
#include <cstdlib>

ZombieHorde::ZombieHorde(int n) : _zombie_type("regular"), _size(n)
{
	if (this->_size < 1)
	{
		std::cout << "\"" << this->_size << "\" is not enough to create a propre horde." << std::endl;
		return ;
	}
	std::cout << "Let's create a horde of " << n << " " << this->_zombie_type << " zombies." << std::endl << std::endl;
	this->_horde = new Zombie[this->_size];
	std::cout << std::endl;
	int i = 0;
	srand(time(NULL));
	while (i < this->_size)
	{
		this->_horde[i].create(randomName(), this->_zombie_type);
		i++;
	}
	return;
}

ZombieHorde::~ZombieHorde()
{
	if (this->_size > 0)
	{
		delete [] this->_horde;
		std::cout << std::endl << "This horde of " << this->_size << " " << this->_zombie_type << " has been destructed." << std::endl << std::endl;
	}
	return;
}

void			ZombieHorde::annonce() const
{
	int i = 0;
	while (i < this->_size)
	{
		this->_horde[i].annonce();
		i++;
	}
}

std::string		ZombieHorde::randomName(void) const
{
	std::string	name []= {"R_Bernard", "R_Alicia", "R_Suzy", "R_Annouk", "R_Jacob", "R_Georgie", "R_Samuel", "R_Kirikou", "R_Fionna", "R_Luc"};
	return name[rand() % 10]; 
}

