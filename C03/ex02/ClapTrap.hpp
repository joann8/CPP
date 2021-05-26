#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class ClapTrap 
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);
		ClapTrap & operator=(ClapTrap const & src);
		
		std::string getName(void) const;
		unsigned int rangedAttack(std::string const & target) const;
		unsigned int meleeAttack(std::string const & target) const ;
		unsigned int takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
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
};

#endif
