#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		class FormNotFound : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		
		Intern(void);
		Intern(std::string const & name, unsigned int grade);
		Intern(Intern const & src);
		virtual ~Intern(void);
		Intern & operator=(Intern const & src);
	
		Form * makeForm(std::string form_name, std::string const & form_target);
};

#endif
