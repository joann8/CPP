#include "Intern.hpp"

const char * Intern::FormNotFound::what() const throw()
{	
	return "The Intern cannot create that file, the type of form does not exist";
}

Intern::Intern(void)
{
	return;
}

Intern::Intern(Intern const & src)
{
	*this = src;
	return;
}

Intern & Intern::operator=(Intern const & src)
{
	(void)src;
	return *this;
}

Intern::~Intern(void)
{
	return;
}

Form * Intern::makeForm(std::string form_name, std::string const & form_target)
{
	Form* forms[3] = { 
		new ShrubberyCreationForm(form_target),
		new RobotomyRequestForm(form_target),
		new PresidentialPardonForm(form_target) };
	
	std::string const form_names[3] = {
		forms[0]->getName(),
		forms[1]->getName(),
		forms[2]->getName() };

	Form *new_form = NULL;
	
	try
	{
		for (int i = 0; i < 3; i++)
		{
			if (form_name == form_names[i])
			{
				new_form = forms[i];
				std::cout << "Intern creates " << form_name << std::endl;
				for (int j = i + 1; j < 3; j++)
					delete forms[j];
				return new_form;
			}
			delete forms[i];
		}
		throw FormNotFound();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return NULL;
}
