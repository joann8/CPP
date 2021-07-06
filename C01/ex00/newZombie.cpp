#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie	*new_guy = new Zombie(name);
	return (new_guy);
}
