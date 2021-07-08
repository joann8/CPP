#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _hp(100), _max_hp(100), _ep(50), _max_ep(50), _level(1), _name("defaut"), _melee_attack(20), _ranged_attack(15), _armor_damage_reduction(3) 
{
	std::cout << "One defaut ScavTrap is born" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : _hp(100), _max_hp(100), _ep(50), _max_ep(50), _level(1), _name(name), _melee_attack(20), _ranged_attack(15), _armor_damage_reduction(3) 
{
	std::cout << "One ScavTrap is born. Welcome to " << this->_name << "!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	std::cout << "One ScavTrap is born from a copy. Welcome to the new " << this->_name << "!" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "One ScavTrap just died. RIP " << this->_name << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
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

void ScavTrap::present(void) const
{
	std::cout << this->_name << " : Hello, I am " << this->_name << ". Here are my characteristics:" << std::endl;
	std::cout << "   - HP: " << this->_hp << "/" << this->_max_hp << std::endl;
	std::cout << "   - EP: " << this->_ep << "/" << this->_max_ep << std::endl;
	std::cout << "   - Level: " << this->_level << std::endl;
	std::cout << "   - Melee Attack Damage: " << this->_melee_attack << " HP" << std::endl;
	std::cout << "   - Ranged Attack Damage: " << this->_ranged_attack << " HP" << std::endl;
	std::cout << "   - Armor damage reduction: " << this->_armor_damage_reduction << " HP" << std::endl;
}

void ScavTrap::status(void) const
{
	std::cout << "STATUS " << this->_name << "- [ level " << this->_level << " | HP " << this->_hp << "/" << this->_max_hp << " | EP " << this->_ep << "/" << this->_max_ep << " ]" << std::endl;
	return;
}

unsigned int ScavTrap::rangedAttack (std::string const & target) const
{
	std::cout << this->_name << " : Here is my ranged attack, " << target << "! (-" << this->_ranged_attack << " HP)" << std::endl;
	return this->_ranged_attack;
}
	
unsigned int ScavTrap::meleeAttack (std::string const & target) const
{
	std::cout << this->_name << " : Here is my melee attack, " << target << "! (-" << this->_melee_attack << " HP)" << std::endl;
	return this->_melee_attack ;
}

void ScavTrap::challengeNewcomer(void)
{
	std::cout << this->_name << " : Hey you! I dare you to win \"" << this->random_challenge() << "\" challenge!" << std::endl;
}

unsigned int ScavTrap::takeDamage (unsigned int amount)
{
	if (this->_hp > amount - this->_armor_damage_reduction)
	{
		this->_hp = this->_hp - amount + this->_armor_damage_reduction;
		std::cout << this->_name << " : Touché... (" << this->_hp << "/" << this->_max_hp << " HP)" << std::endl;
		return (1);
	}
	else
	{
		this->_hp = 0;
		std::cout << this->_name << " died. This SCAV-TP was not strong enough" << std::endl;
		return (0);
	}
}

void ScavTrap::beRepaired (unsigned int amount)
{
	if (this->_hp +  amount <= this->_max_hp)
		this->_hp = this->_hp + amount;
	else
		this->_hp = this->_max_hp;
	std::cout <<  this->_name << " : Drinking a redbull! (+ " << amount << " HP)" << std::endl;
	return ;
}

std::string ScavTrap::random_challenge(void) const
{
	std::string challenge[] =	{"Paper, Rock, Cissors", "I have in my suitcase", "Drink or Die", "Karaoke", "Shittiest flute ever"};
	return challenge[rand() % 5];
}

std::string ScavTrap::getName(void) const
{
	return this->_name;
}
