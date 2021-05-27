#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
	public:
		Victim(std::string name);
		Victim(Victim const & src);
		~Victim(void);
		Victim & operator=(Victim const & src);
		
		std::string getName(void) const;
		virtual void getPolymorphed(void) const;

	protected:
		std::string _name;
		Victim(void);
};

std::ostream & operator<<(std::ostream & out, Victim const & src);

#endif
