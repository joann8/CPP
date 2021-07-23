#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const & src);
		~Sorcerer(void);
		Sorcerer & operator=(Sorcerer const & src);
		
		std::string getName(void) const;
		std::string getTitle(void) const;
		void polymorph(Victim const & src) const;
	
	private:
		Sorcerer(void);
		std::string _name;
		std::string _title;
};

std::ostream & operator<<(std::ostream & out, Sorcerer const & src);

#endif
