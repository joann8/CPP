#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		AMateria & operator=(AMateria const & src);
		virtual ~AMateria(void);
		
		std::string const & getType(void) const; //Returns the materia type
		unsigned int getXP(void) const; //Returns the Materia's XP
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
	
	protected:
		std::string _type;
		unsigned int _xp;
};

#endif
