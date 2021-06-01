#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat Lola("Lola", LOW_GRADE);
	Bureaucrat Jack("Jack", HIGH_GRADE);

	std::cout << "HIGH_GRADE = " << HIGH_GRADE << " | LOW_GRADE = " << LOW_GRADE << std::endl;

	std::cout << "\n** Test Paperasse **" << std::endl;
	try
	{
		ShrubberyCreationForm Paperasse("Timmy");
		std::cout << Paperasse;
		Paperasse.execute(Lola);
		Lola.signForm(Paperasse);
		Paperasse.execute(Lola); 
		std::cout << Paperasse;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
/*	
	std::cout << "\n** Test Important Doc **" << std::endl;
	try
	{
		Form Important("Doc", HIGH_GRADE, HIGH_GRADE);
		std::cout << Important;
		Lola.signForm(Important);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{	
		Form Important("Doc", HIGH_GRADE, HIGH_GRADE);
		std::cout << Important;
		Jack.signForm(Important);
		std::cout << Important;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n**Test with upgrade **" << std::endl;
	try
	{
		Form Important("Doc", HIGH_GRADE , HIGH_GRADE);
		std::cout << Important;
		Bureaucrat Lola("Lola", HIGH_GRADE + 1);
		std::cout << Lola;
		Lola.upgrade();
		std::cout << Lola;
		Lola.signForm(Important);
		std::cout << Important;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n**Test with downgrade **" << std::endl;
	try
	{
		Form Important("Doc", HIGH_GRADE , HIGH_GRADE);
		std::cout << Important;
		Bureaucrat Lola("Lola", HIGH_GRADE);
		std::cout << Lola;
		Lola.downgrade();
		std::cout << Lola;
		Lola.signForm(Important);
		std::cout << Important;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	

	std::cout << "\n**Test Form HIGH_GRADE - 1 **" << std::endl;
	try
	{
		Form TooHigh("TooHigh", HIGH_GRADE, HIGH_GRADE - 1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	

	std::cout << "\n**Test FORM LOW_GRADE + 1 **" << std::endl;
	try
	{
		Form TooLow("TowLow", LOW_GRADE + 1, LOW_GRADE);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	*/
	return (0);
}

