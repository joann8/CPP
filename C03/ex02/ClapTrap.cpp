#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :  _hp(0), _max_hp(0), _ep(0), _max_ep(0), _level(0), _name("defaut"), _melee_attack(0), _ranged_attack(0), _armor_damage_reduction(0)  
{
	std::cout << "One defaut ClapTrap is born" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _hp(0), _max_hp(0), _ep(0), _max_ep(0), _level(0), _name(name), _melee_attack(0), _ranged_attack(0), _armor_damage_reduction(0)  
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
	this->_level = src._level;
	this->_name = src._name;
	this->_ranged_attack = src._ranged_attack;
	this->_melee_attack = src._melee_attack;
	this->_armor_damage_reduction = src._armor_damage_reduction;
	return *this;
}

void ClapTrap::present(void) const
{
	std::cout << this->_name << " : Hello, I am " << this->_name << ". Here are my characteristics:" << std::endl;
	std::cout << "   - HP: " << this->_hp << "/" << this->_max_hp << std::endl;
	std::cout << "   - EP: " << this->_ep << "/" << this->_max_ep << std::endl;
	std::cout << "   - Level: " << this->_level << std::endl;
	std::cout << "   - Melee Attack Damage: " << this->_melee_attack << " HP" << std::endl;
	std::cout << "   - Ranged Attack Damage: " << this->_ranged_attack << " HP" << std::endl;
	std::cout << "   - Armor damage reduction: " << this->_armor_damage_reduction << " HP" << std::endl;
}

void ClapTrap::status(void) const
{
	std::cout << "STATUS " << this->_name << "- [ level " << this->_level << " | HP " << this->_hp << "/" << this->_max_hp << " | EP " << this->_ep << "/" << this->_max_ep << " ]" << std::endl;
	return;
}

std::string ClapTrap::getName(void) const
{
	return this->_name;
}

void ClapTrap::beRepaired (unsigned int amount)
{
	if (this->_hp +  amount <= 100)
		this->_hp = this->_hp + amount;
	else
		this->_hp = 100;
	return ;
}

unsigned int ClapTrap::takeDamage (unsigned int amount)
{
	if (this->_hp > amount - this->_armor_damage_reduction)
	{
		this->_hp = this->_hp - amount + this->_armor_damage_reduction;
		return (1);
	}
	else
	{
		this->_hp = 0;
		return (0);
	}
}

unsigned int ClapTrap::rangedAttack (std::string const & target) const
{
	(void) target;
	return this->_ranged_attack;
}
	
unsigned int ClapTrap::meleeAttack (std::string const & target) const
{
	(void) target;
	return this->_melee_attack ;
}

