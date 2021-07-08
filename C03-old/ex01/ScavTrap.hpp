#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class ScavTrap 
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & src);
		
		std::string getName(void) const;
		unsigned int rangedAttack(std::string const & target) const;
		unsigned int meleeAttack(std::string const & target) const ;
		unsigned int takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(void);
		
		void status(void) const;
		void present(void) const;
		std::string random_challenge(void) const;
	
	private:
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
