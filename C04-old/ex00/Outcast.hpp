#ifndef OUTCAST_HPP
#define OUTCAST_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Outcast : public Victim
{
	public:
		Outcast(std::string name);
		Outcast(Outcast const & src);
		~Outcast(void);
		Outcast & operator=(Outcast const & src);
		
		virtual void getPolymorphed(void) const;
	
	private:
		Outcast(void);
};

#endif


