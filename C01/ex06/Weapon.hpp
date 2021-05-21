#ifndef _HPP
#define _HPP

#include <iostream>

class Weapon 
{
	public:
		Weapon(void);
		Weapon(std::string weapon);
		~Weapon(void);
		void setType(std::string type);
	
	private:
		std::string _weapon;
};

#endif
