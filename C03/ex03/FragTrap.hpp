#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap 
{
	public:
		FragTrap(std::string name);
		FragTrap(void);
		FragTrap(FragTrap const & src);
		virtual ~FragTrap(void);
		FragTrap & operator=(FragTrap const & src);
		
		void highFivesGuys(void) const;
};

#endif
