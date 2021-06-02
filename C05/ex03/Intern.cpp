#include "Intern.hpp"

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

	int i;
	i = 0;
	while (i < 3)
	{
		if (form_name == form_names[i])
		{
			new_form = forms[i];
			std::cout << "Intern creates " << form_name << std::endl;
		}
		else
			delete forms[i];
		i++;
	}
	if (new_form == NULL)
		std::cout << "Intern cannot create " <<form_name << ", form does not exist" << std::endl;
	return new_form;
}
