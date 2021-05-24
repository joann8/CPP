#ifndef _HPP
#define _HPP

#include <iostream>

class Weapon 
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		void setType(std::string type);
		std::string const &getType(void) const;
	
	private:
		std::string _type;
};

#endif
