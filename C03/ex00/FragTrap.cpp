#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _hp(100), _max_hp(100), _ep(100), _max_ep(100), _level(1), _name("defaut"), _melee_attack(30), _ranged_attack(20), _armor_damage_reduction(5) 
{
	std::cout << "One defaut FragTrap is born" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : _hp(100), _max_hp(100), _ep(100), _max_ep(100), _level(1), _name(name), _melee_attack(30), _ranged_attack(20), _armor_damage_reduction(5) 
{
	std::cout << "One FragTrap is born. Welcome to " << this->_name << "!" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "One FragTrap is born from a copy. Welcome to the new " << this->_name << "!" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "One FragTrap just died. RIP " << this->_name << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
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

void FragTrap::status(void) const
{
	std::cout << "STATUS " << this->_name << ": [ level " << this->_level << " | HP " << this->_hp << " / " << this->_max_hp << " | EP " << this->_ep << " / " << this->_max_ep << " ]" << std::endl;
	return;
}

unsigned int FragTrap::rangedAttack (std::string const & target) const
{
	std::cout << this->_name << " : Take this ranged attack, " << target << "! (-" << this->_ranged_attack << " HP)" << std::endl;
	return this->_ranged_attack;
}
	
unsigned int FragTrap::meleeAttack (std::string const & target) const
{
	std::cout << this->_name << " : Take this melee attack, " << target << "! (-" << this->_melee_attack << " HP)" << std::endl;
	return this->_melee_attack ;
}

unsigned int FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	unsigned int power;

	power = 25;
	if (this->_ep >= power)
	{
		this->_ep = this->_ep - power;
		std::cout << this->_name << " : Take this special \"" << this->random_attack() << "\" attack, " << target << "! (- " << power << " HP)" << std::endl;
		return (power);
	}
	else
	{
		std::cout << this->_name << " : I could use a special attack from my vault to attack you, " << target << ", but you're are lucky I don't have enough EP! (" << this->_ep << " EP left)" << std::endl;
		return (0);
	}
}

unsigned int FragTrap::takeDamage (unsigned int amount)
{
	if (this->_hp > amount - this->_armor_damage_reduction)
	{
		this->_hp = this->_hp - amount + this->_armor_damage_reduction;
		std::cout << this->_name << " : Ouch, that hurts... (" << this->_hp << " / " << this->_max_hp << " HP)" << std::endl;
		return (1);
	}
	else
	{
		this->_hp = 0;
		std::cout << this->_name << " died. This FR4G-TP was not strong enough" << std::endl;
		return (0);
	}
}

void FragTrap::beRepaired (unsigned int amount)
{
	if (this->_hp +  amount <= 100)
		this->_hp = this->_hp + amount;
	else
		this->_hp = 100;
	std::cout <<  this->_name << " : Taking back some energy! (+ " << amount << " HP)" << std::endl;
	return ;
}

std::string FragTrap::random_attack(void) const
{
	std::string attack[] =	{"Butterflies", "Otter", "Ferocious", "Panda", "Shitty flute"};
	return attack[rand() % 5];
}

std::string FragTrap::getName(void) const
{
	return this->_name;
}
