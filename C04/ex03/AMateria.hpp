#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		AMateria & operator=(AMateria const & src);
		virtual ~AMateria(void);
		
		std::string const & getType(void) const; //Returns the materia type
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
	
	protected:
		AMateria(void);
		std::string _type;
};

#endif
