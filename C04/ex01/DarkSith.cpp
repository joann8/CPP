#include "DarkSith.hpp"

DarkSith::DarkSith(void) : Enemy(50, "DarkSith") 
{
	std::cout << "* raised from the dark side *" << std::endl;

	return ;
}

DarkSith::DarkSith(DarkSith const & src)
 {
 	*this = src;
	std::cout << "* raised from the Dark side *" << std::endl;
	return ;
}

DarkSith::~DarkSith(void)
{
	std::cout << "* return to the Dark side *" << std::endl;
	return ;
}

DarkSith & DarkSith::operator=(DarkSith const & src)
{
	this->Enemy::_type = src.Enemy::_type;
	this->Enemy::_hp = src.Enemy::_hp;
	return *this;
}
