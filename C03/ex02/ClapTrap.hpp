#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int attack, std::string type);
		ClapTrap(ClapTrap const & src);
		ClapTrap & operator=(ClapTrap const & src);
		~ClapTrap(void);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		void present(void) const;
		void status(void) const;
	
		std::string getName(void) const;
		std::string getType(void) const;
		unsigned int getAttack(void) const;
		unsigned int getHP(void) const;
		unsigned int getMaxHP(void) const;
		unsigned int getEP(void) const;
		unsigned int getMaxEP(void) const;
		void setEP(unsigned int ep);
		void setMaxEP(unsigned int ep);
		void setHP(unsigned int hp);
		void setMaxHP(unsigned int hp);
		void setAttack(unsigned int attack);
		void setName(std::string name);
		void setType(std::string type);
	
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
