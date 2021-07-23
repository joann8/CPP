#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hp(10), _max_hp(10), _ep(10), _max_ep(10), _name("defaut"), _attack(0), _type("ClapTrap")
{
	std::cout << "One defaut ClapTrap is born" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _hp(10), _max_hp(10), _ep(10), _max_ep(10), _name(name), _attack(0), _type("ClapTrap")
{
	std::cout << "One ClapTrap is born. Welcome to " << getName() << "!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int attack, std::string type) : _hp(hp), _max_hp(hp), _ep(ep), _max_ep(ep), _name(name), _attack(attack), _type(type)
{
	std::cout << "One ClapTrap is born. Welcome to " << getName() << "!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	std::cout << "One ClapTrap is born from a copy. Welcome to the new " << getName() << "!" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "One ClapTrap just died. RIP " << getName() << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{
	this->_hp = src.getHP();
	this->_max_hp = src.getMaxHP();
	this->_ep = src.getEP();
	this->_max_ep = src.getMaxEP();
	this->_name = src.getName();
	this->_attack = src.getAttack();
	this->_type = src.getType();
	return *this;
}

// REQUIRED FUNCTIONS

void ClapTrap::attack (std::string const & target) 
{
	std::cout << getName() << " (" << getType() << ") : Take this attack, " << target << "! (-" << getAttack() << " points of damages)" << std::endl;
	return ;
}
	
void ClapTrap::takeDamage (unsigned int amount)
{
	if (getHP() > amount)
	{
		setHP(getHP() - amount);
		std::cout << getName() << " (" << getType() <<") : Ouch, that hurts... (" << getHP() << "/" << getMaxHP() << " HP)" << std::endl;
	}
	else
	{
		setHP(0);
		std::cout << getName() << " died. This " << getType() << " was not strong enough" << std::endl;
	}
	return;
}

void ClapTrap::beRepaired (unsigned int amount)
{
	if (getHP() +  amount <= getMaxHP())
		setHP(getHP() + amount);
	else
		setHP(getMaxHP());
	std::cout <<  getName() << " (" << getType() << ") : Taking back some energy! (+ " << amount << " HP)" << std::endl;
	return ;
}

// Additonal functions for readibility

void ClapTrap::present(void) const
{	
	std::cout << getName() << " : Hello, I am " << getName() << ". Here are my characteristics:" << std::endl;
	std::cout << "   - HP: " << getHP() << "/" << getMaxHP() << std::endl;
	std::cout << "   - EP: " << getEP() << "/" << getMaxEP() << std::endl;
	std::cout << "   - Attack Damage: " << getAttack() << " HP" << std::endl;
}

void ClapTrap::status(void) const
{
	std::cout << "STATUS " << getName() << " : [ HP " << getHP() << "/" << getMaxHP() << " | EP " << getEP() << "/" << getMaxEP() << " ]" << std::endl;
	return;
}

// GETTERS

std::string ClapTrap::getName(void) const
{
	return this->_name;
}

std::string ClapTrap::getType(void) const
{
	return this->_type;
}

unsigned int ClapTrap::getAttack(void) const
{
	return this->_attack;
}

unsigned int ClapTrap::getHP(void) const
{
	return this->_hp;
}

unsigned int ClapTrap::getMaxHP(void) const
{
	return this->_max_hp;
}

unsigned int ClapTrap::getEP(void) const
{
	return this->_ep;
}

unsigned int ClapTrap::getMaxEP(void) const
{
	return this->_max_ep;
}

// SETTERS

void ClapTrap::setEP(unsigned int ep)
{
	this->_ep = ep;
}

void ClapTrap::setMaxEP(unsigned int ep)
{
	this->_max_ep = ep;
}

void ClapTrap::setHP(unsigned int hp)
{
	this->_hp = hp;
}

void ClapTrap::setMaxHP(unsigned int hp)
{
	this->_max_hp = hp;
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setType(std::string type)
{
	this->_type = type;
}

void ClapTrap::setAttack(unsigned int attack)
{
	this->_attack = attack;
}
