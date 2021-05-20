#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	return ;
}

ZombieEvent::~ZombieEvent()
{
	return ;
}

std::string ZombieEvent::setZombieType()
{
	std::string* input = new std::string;

	std::getline(std::cin, *input);
	return input;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie*	new_guy = Zombie(name);
	
	new_guy->set_type(setZombieType());
	new_guy->annonce();
	return (new_guy);
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie	new_guy(name);
	
	new_guy.set_type(setZombieType());
	new_guy.annonce();
}

void	ZombieEvent::randomeChump()
{
	Zombie new_guy = Zombie("Bernard");

	new_guy.set_type(setZombieType());
	new_guy.annonce();
}
