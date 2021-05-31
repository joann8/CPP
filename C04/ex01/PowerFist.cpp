 #include "PowerFist.hpp"

 PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::PowerFist(PowerFist const & src) 
 {
 	*this = src;
	return ;
}

PowerFist::~PowerFist(void)
{
	return ;
}

PowerFist & PowerFist::operator=(PowerFist const & src)
{
	this->AWeapon::_name = src.AWeapon::_name;
	this->AWeapon::_ap = src.AWeapon::_ap;
	this->AWeapon::_damage = src.AWeapon::_damage;
	return *this;
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}
