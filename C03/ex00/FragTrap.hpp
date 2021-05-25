#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class FragTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		FragTrap & operator=(FragTrap const & src);
		~FragTrap(void);

		std::string getName(void) const;
		unsigned int rangedAttack(std::string const & target) const;
		unsigned int meleeAttack(std::string const & target) const ;
		int takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		unsigned int vaulthunter_dot_exe(std::string const & target);
		std::string random_attack(void) const;
		void status(void) const;

	private:
		unsigned int	_hp;
		unsigned int	_max_hp;
		int _ep;
		int _max_ep;
		int	_level;
		std::string _name;
		int _melee_attack;
		int _ranged_attack;
		int _armor_damage_reduction;
};

#endif
