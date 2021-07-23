#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy::Enemy(170, "Super Mutant") 
{
	std::cout << "Gaaah. Me want to smash heads!" << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const & src)
 {
	*this = src;
	std::cout << "Gaaah. Me want to smash heads!" << std::endl;
	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & src)
{
	this->Enemy::_type = src.Enemy::_type;
	this->Enemy::_hp = src.Enemy::_hp;
	return *this;
}

void SuperMutant::takeDamage(int amount)
{
	if (amount - 3 >= 0)
		this->Enemy::takeDamage(amount - 3);
	return;
}

