 #include "Character.hpp"

 Character::Character(void) : _name("default_name"), _ap(40), _max_ap(40)
 {
	return ;
}

Character::Character(std::string const & name) : _name(name), _ap(40)
{
	return ;
}

Character::Character(Character const & src)
 {
 	*this = src;
	return ;
}

Character::~Character(void)
{
	return ;
}

Character & Character::operator=(Character const & src)
{
	this->_name = src._name;
	this->_ap = src._ap;
	this->_weapon = src._weapon;
	return *this;
}

std::string Character::getName(void) const
{
	return this->_name;
}

int Character::getAP(void) const
{
	return this->_ap;
}

AWeapon * Character::getWeapon(void) const
{
	return this->_weapon;
}

void Character::recoverAP(void)
{
	if (this->_ap + 10 <= this->_max_ap)
		this->_ap += 10;
	else
		this->_ap = this->_max_ap;
	return ; 
}

void Character::attack(Enemy *enemy)
{
	if (this->_weapon == NULL)
		return ;
	if (this->_ap < this->_weapon->getAPCost())
	{
		std::cout << this->_name << " cannot attack " << enemy->getType() << " with a " << this->_weapon->getName() << ": only " << this->_ap << " AP left, " << this->_weapon->getAPCost() << " needed" << std::endl;
		return ;
	}
	this->_ap -= this->_weapon->getAPCost();
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHP() == 0)
		enemy->~Enemy();
	return ;	
}

void Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
	return;
}

std::ostream & operator<<(std::ostream & out, Character const & src)
{
	AWeapon *weap;
	weap = src.getWeapon();
	if (weap !=  NULL)
		out << src.getName() << " has " << src.getAP() << " AP and wields a " << weap->getName() << std::endl;
	else
		out << src.getName() << " has " << src.getAP() << " AP and is unarmed" << std::endl;
	return out;
}
