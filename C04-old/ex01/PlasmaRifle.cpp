 #include "PlasmaRifle.hpp"

 PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
 {
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src)
 {
 	*this = src;
	return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & src)
{
	this->AWeapon::_name = src.AWeapon::_name;
	this->AWeapon::_ap = src.AWeapon::_ap;
	this->AWeapon::_damage = src.AWeapon::_damage;
	return *this;
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}
