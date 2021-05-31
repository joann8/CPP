 #include "AWeapon.hpp"

 AWeapon::AWeapon(void) : _name("defaut_name"), _ap(0), _damage(0)
 {
	return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _ap(apcost), _damage(damage)
{
	return ;
}

AWeapon::AWeapon(AWeapon const & src)
 {
 	*this = src;
	return ;
}

AWeapon::~AWeapon(void)
{
	return ;
}

AWeapon & AWeapon::operator=(AWeapon const & src)
{
	this->_name = src._name;
	this->_ap = src._ap;
	this->_damage = src._damage;
	return *this;
}

std::string AWeapon::getName(void) const
{
	return this->_name;
}

int AWeapon::getAPCost(void) const
{
	return this->_ap;
}

int AWeapon::getDamage(void) const
{
	return this->_damage;
}
