#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		ClapTrap & operator=(ClapTrap const & src);
		virtual ~ClapTrap(void);

		std::string getName(void) const;
		unsigned int getAttack(void) const;
		unsigned int getHP(void) const;
		virtual void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void present(void) const;
		void status(void) const;
	
	protected:
		unsigned int	_hp;
		unsigned int	_max_hp;
		unsigned int	_ep;
		unsigned int	_max_ep;
		std::string		_name;
		unsigned int	_attack;
		std::string		_type;
		ClapTrap(void);
};

#endif
