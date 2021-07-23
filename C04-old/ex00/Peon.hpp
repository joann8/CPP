#ifndef PEON_HPP
#define PEON_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string name);
		Peon(Peon const & src);
		~Peon(void);
		Peon & operator=(Peon const & src);
		
		virtual void getPolymorphed(void) const;
	
	private:
		Peon(void);
};

#endif


