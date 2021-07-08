#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & src);
		NinjaTrap & operator=(NinjaTrap const & src);
		~NinjaTrap(void);

		unsigned int rangedAttack(std::string const & target) const;
		unsigned int meleeAttack(std::string const & target) const ;
		unsigned int takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void ninjaShoebox(NinjaTrap const & target) const;
		void ninjaShoebox(FragTrap const & target) const;
		void ninjaShoebox(ScavTrap const & target) const;
};

#endif
