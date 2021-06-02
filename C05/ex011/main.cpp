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
	Form Paperasse("Paperasse", LOW_GRADE, LOW_GRADE);
	std::cout << Paperasse;
	Lola.signForm(Paperasse);
	Jack.signForm(Paperasse);
	std::cout << "\n** Test Important Doc **" << std::endl;
	Form Important("Doc", HIGH_GRADE, HIGH_GRADE);
	std::cout << Important;
	Lola.signForm(Important);
	Jack.signForm(Important);
	std::cout << "\n**Test with upgrade / downgrade **" << std::endl;
	Form Docs("Docs", HIGH_GRADE , HIGH_GRADE);
	std::cout << Docs;
	Bureaucrat Lolie("Lolie", HIGH_GRADE);
	std::cout << Lolie;
	Lolie.downgrade();
	std::cout << Lolie;
	Lola.signForm(Docs);
	Lolie.upgrade();
	std::cout << Lolie;
	Lola.signForm(Docs);

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

