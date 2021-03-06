#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "HIGH_GRADE = " << HIGH_GRADE << " | LOW_GRADE = " << LOW_GRADE << std::endl;
	Bureaucrat Lola("Lola", LOW_GRADE);
	std::cout << Lola;
	Bureaucrat Jack("Jack", HIGH_GRADE);
	std::cout << Jack;


	std::cout << "\n** Test Paperasse **" << std::endl;
	try
	{
		Form Paperasse("Paperasse", LOW_GRADE, LOW_GRADE);
		std::cout << Paperasse;
		Lola.signForm(Paperasse);
		Jack.signForm(Paperasse);
		std::cout << Paperasse;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n** Test Important Doc **" << std::endl;
	try
	{
		Form Important("Important Doc", HIGH_GRADE, HIGH_GRADE);
		std::cout << Important;
		Lola.signForm(Important);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{	
		Form Important("Important Doc", HIGH_GRADE, HIGH_GRADE);
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
		Form Important("Important Doc", HIGH_GRADE , HIGH_GRADE);
		std::cout << Important;
		Bureaucrat Jackie("Jackie", HIGH_GRADE + 1);
		std::cout << Jackie;
		Jackie.upgrade();
		std::cout << Jackie;
		Jackie.signForm(Important);
		std::cout << Important;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n**Test with downgrade **" << std::endl;
	try
	{
		Form Important("Important Doc", HIGH_GRADE , HIGH_GRADE);
		std::cout << Important;
		Bureaucrat Albert("Albert", HIGH_GRADE);
		std::cout << Albert;
		Albert.downgrade();
		std::cout << Albert;
		Albert.signForm(Important);
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
	
	return (0);
}

