#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class FragTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		FragTrap & operator=(FragTrap const & src);
		~FragTrap(void);

		std::string getName(void) const;
		unsigned int rangedAttack(std::string const & target) const;
		unsigned int meleeAttack(std::string const & target) const ;
		unsigned int takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		unsigned int vaulthunter_dot_exe(std::string const & target);
		std::string random_attack(void) const;
		void status(void) const;
		void present(void) const;
	
	protected:
		unsigned int	_hp;
		unsigned int	_max_hp;
		unsigned int	_ep;
		unsigned int	_max_ep;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_melee_attack;
		unsigned int	_ranged_attack;
		unsigned int	_armor_damage_reduction;
	
	private:
		FragTrap(void);
};

#endif
