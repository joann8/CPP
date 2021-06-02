#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "\n** Test Shubbery **" << std::endl;	
	Bureaucrat Jack("Jack", 137);
	std::cout << Jack;
	Bureaucrat Lola("Lola", 146);
	std::cout << Lola;
	ShrubberyCreationForm Shu("Shu");
	std::cout << Shu;

	std::cout << "---->1<-----" << std::endl;
	Jack.executeForm(Shu);
	std::cout << "---->2<-----" << std::endl;
	Lola.signForm(Shu);
	std::cout << "---->3<-----" << std::endl;
	Jack.signForm(Shu);
	std::cout << Shu;
	Lola.executeForm(Shu);
	std::cout << "---->4<-----" << std::endl;
	Jack.signForm(Shu);
	Jack.executeForm(Shu);

	std::cout << "\n** Test Robotomy **" << std::endl;	
	Bureaucrat Jacky("Jacky", 45);
	std::cout << Jacky;
	Bureaucrat Lolie("Lolie", 73);
	std::cout << Lolie;
	RobotomyRequestForm Rob("Rob");
	std::cout << Rob;
	std::cout << "---->1<-----" << std::endl;
	Jacky.executeForm(Rob);
	std::cout << "---->2<-----" << std::endl;
	Lolie.signForm(Rob);
	std::cout << "---->3<-----" << std::endl;
	Jacky.signForm(Rob);
	std::cout << Rob;
	Lolie.executeForm(Rob);
	std::cout << "---->4<-----" << std::endl;
	Jacky.signForm(Rob);
	Jacky.executeForm(Rob); 

	std::cout << "\n** Test Presidential **" << std::endl;	
	Bureaucrat Jacko("Jacko", 5);
	std::cout << Jacko;
	Bureaucrat Lolo("Lolo", 26);
	std::cout << Lolo;
	PresidentialPardonForm Pres("Pres");
	std::cout << Pres;
	std::cout << "---->1<-----" << std::endl;
	Jacko.executeForm(Pres);
	std::cout << "---->2<-----" << std::endl;
	Lolo.signForm(Pres);
	std::cout << "---->3<-----" << std::endl;
	Jacko.signForm(Pres);
	std::cout << Pres;
	Lolo.executeForm(Pres);
	std::cout << "---->4<-----" << std::endl;
	Jacko.signForm(Pres);
	Jacko.executeForm(Pres);
	return (0);
}

