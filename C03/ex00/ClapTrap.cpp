#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hp(10), _max_hp(10), _ep(10), _max_ep(10), _name("defaut"), _attack(0)
{
	std::cout << "One defaut ClapTrap is born" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _hp(10), _max_hp(10), _ep(10), _max_ep(10), _name(name), _attack(0)
{
	std::cout << "One ClapTrap is born. Welcome to " << this->_name << "!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	std::cout << "One ClapTrap is born from a copy. Welcome to the new " << this->_name << "!" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "One ClapTrap just died. RIP " << this->_name << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{
	this->_hp = src._hp;
	this->_max_hp = src._max_hp;
	this->_ep = src._ep;
	this->_max_ep = src._max_ep;
	this->_name = src._name;
	this->_attack = src._attack;
	return *this;
}

void ClapTrap::present(void) const
{	
	std::cout << this->_name << " : Hello, I am " << this->_name << ". Here are my characteristics:" << std::endl;
	std::cout << "   - HP: " << this->_hp << "/" << this->_max_hp << std::endl;
	std::cout << "   - EP: " << this->_ep << "/" << this->_max_ep << std::endl;
	std::cout << "   - Attack Damage: " << this->_attack << " HP" << std::endl;
}

void ClapTrap::status(void) const
{
	std::cout << "STATUS " << this->_name << " : [ HP " << this->_hp << "/" << this->_max_hp << " | EP " << this->_ep << "/" << this->_max_ep << " ]" << std::endl;
	return;
}

void ClapTrap::attack (std::string const & target) 
{
	std::cout << this->_name << " (ClapTrap) : Take this attack, " << target << "! (-" << this->_attack << " points of damages)" << std::endl;
	return ;
}
	
void ClapTrap::takeDamage (unsigned int amount)
{
	if (this->_hp > amount)
	{
		this->_hp = this->_hp - amount;
		std::cout << this->_name << " (ClapTrap) : Ouch, that hurts... (" << this->_hp << "/" << this->_max_hp << " HP)" << std::endl;
	}
	else
	{
		this->_hp = 0;
		std::cout << this->_name << " died. This ClapTrap was not strong enough" << std::endl;
	}
	return;
}

void ClapTrap::beRepaired (unsigned int amount)
{
	if (this->_hp +  amount <= this->_max_hp)
		this->_hp = this->_hp + amount;
	else
		this->_hp = this->_max_hp;
	std::cout <<  this->_name << " (ClapTrap) : Taking back some energy! (+ " << amount << " HP)" << std::endl;
	return ;
}

std::string ClapTrap::getName(void) const
{
	return this->_name;
}

unsigned int ClapTrap::getAttack(void) const
{
	return this->_attack;
}
