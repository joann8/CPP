#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream> //string class to operate on strings >> for the address

class Brain
{
	public:
		Brain(void);
		~Brain(void);
		std::string	identify(void) const;
};

#endif
