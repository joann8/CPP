#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat Jack("Jack", 1);
	std::cout << Jack;
	Intern intern;
	std::cout << "A new intern arrived" << std::endl;

	Form *form;

	std::cout << "\n----> 1 - random <-----" << std::endl;
	form = intern.makeForm("random", "Bender");
	if (form)
	{
		Jack.signForm(*form);
		Jack.executeForm(*form);	
	}
	delete form;

	std::cout << "\n----> 2 - Presidential Pardon <-----" << std::endl;
	form = intern.makeForm("presidential pardon", "Bender");
	if (form)
	{
		Jack.signForm(*form);
		Jack.executeForm(*form);	
	}
		
	delete form;
	
	std::cout << "\n----> 3 - Shrubbery Creation <-----" << std::endl;
	form = intern.makeForm("shrubbery creation", "Bender");
	if (form)
	{
		Jack.signForm(*form);
		Jack.executeForm(*form);	
	}
	
	delete form;
	
	std::cout << "\n----> 4 - Robotomy request <-----" << std::endl;
	form = intern.makeForm("robotomy request", "Bender");
	if (form)
	{
		Jack.signForm(*form);
		Jack.executeForm(*form);	
	}
		
	delete form;
	
	return (0);
}

