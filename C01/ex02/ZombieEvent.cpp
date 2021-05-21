#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) : _zombie_type("")
{
	std::cout << "-->Creation a ZombieEvent." << std::endl;
	return ;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "<--Destruction of a ZombieEvent" << std::endl;
	return ;
}

void ZombieEvent::setZombieType(std::string type)
{
	this->_zombie_type = type;
	std::cout << "-->Zombie type is set to \"" << this->_zombie_type << "\"." << std::endl;
	return ;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie	*new_guy = new Zombie(name, this->_zombie_type);
	return (new_guy);
}

void	ZombieEvent::randomChump(void) const
{
	std::string	name []= {"R_Bernard", "R_Alicia", "R_Suzy", "R_Annouk", "R_Jacob", "R_Georgie", "R_Samuel", "R_Kirikou", "R_Fionna", "R_Luc"};
	std::time_t res = std::time(NULL);
	Zombie new_guy(name[res % 10 ], this->_zombie_type);
	new_guy.annonce();
	return ; 
}
