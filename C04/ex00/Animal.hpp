#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const & src);
		virtual ~Animal(void);
		Animal & operator=(Animal const & src);
		
		std::string getType(void) const;
		virtual void makeSound(void) const;

	protected:
		std::string _type;
};

#endif
