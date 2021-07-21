#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap 
{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		ScavTrap(void);
		virtual ~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & src);
		
		void attack(std::string const & target);
		void guardGate(void) const;
};

#endif
