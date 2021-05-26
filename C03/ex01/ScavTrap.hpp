#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "FragTrap.hpp"

class ScavTrap : public FragTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & src);
		unsigned int rangedAttack(std::string const & target) const;
		unsigned int meleeAttack(std::string const & target) const ;
		unsigned int takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void challengeNewcomer(void);
		std::string random_challenge(void) const;
	
	private:
		using FragTrap::vaulthunter_dot_exe;
};

#endif
