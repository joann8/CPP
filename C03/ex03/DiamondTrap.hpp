#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & src);
		DiamondTrap & operator=(DiamondTrap const & src);
		~DiamondTrap(void);
		
		std::string setName(std::string name);
		
		void whoAmI(void) const;
		void attack(std::string const & target);
	
	private:
		std::string _name;
};

#endif
