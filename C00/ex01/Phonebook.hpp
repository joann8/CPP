#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string> //for getline
#include <iomanip> //for setw
#include <iostream> //for std
#include "Contact.hpp"

class Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);
		Contact my_contacts[8];
};

#endif
