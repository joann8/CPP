 #include "LightSaber.hpp"

 LightSaber::LightSaber(void) : AWeapon("Light Saber", 3, 15)
 {
	return ;
}

LightSaber::LightSaber(LightSaber const & src)
 {
 	*this = src;
	return ;
}

LightSaber::~LightSaber(void)
{
	return ;
}

LightSaber & LightSaber::operator=(LightSaber const & src)
{
	this->AWeapon::_name = src.AWeapon::_name;
	this->AWeapon::_ap = src.AWeapon::_ap;
	this->AWeapon::_damage = src.AWeapon::_damage;
	return *this;
}

void LightSaber::attack(void) const
{
	std::cout << "* Psssheew Kkssshhhhh *" << std::endl;
	return ;
}
