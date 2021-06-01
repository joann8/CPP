#include "Bureaucrat.hpp"

int main()
{
	std::cout << "HIGH_GRADE = " << HIGH_GRADE << " | LOW_GRADE = " << LOW_GRADE << std::endl;

	std::cout << "\n**Test Grade LOW_GRADE/2 / downgrade / upgrade **" << std::endl;
	try
	{
		Bureaucrat Lola("Lola", LOW_GRADE / 2);
		std::cout << Lola;
		Lola.downgrade();
		std::cout << Lola;
		Lola.upgrade();
		std::cout << Lola;
	}
	catch (std::exception & e)
	{
		std::cout << "Enter catch" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n**Test Grade HIGH_GRADE - 1 **" << std::endl;
	try
	{
		Bureaucrat Lola("Lola", HIGH_GRADE - 1);
	}
	catch (std::exception & e)
	{
		std::cout << "Enter catch" << std::endl;
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n**Test Grade HIGH_GRADE puis upgrade **" << std::endl;
	try
	{
		Bureaucrat Lola("Lola", HIGH_GRADE);
		std::cout << Lola;
		Lola.upgrade();
	}
	catch (std::exception & e)
	{
		std::cout << "Enter catch" << std::endl;
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n**Test Grade LOW_GRADE + 1 **" << std::endl;
	try
	{
		Bureaucrat Lola("Lola", LOW_GRADE + 1);
	}
	catch (std::exception & e)
	{
		std::cout << "Enter catch" << std::endl;
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n**Test Grade LOW_GRADE puis downgrade **" << std::endl;
	try
	{
		Bureaucrat Lola("Lola", LOW_GRADE);
		std::cout << Lola;
		Lola.downgrade();
	}
	catch (std::exception & e)
	{
		std::cout << "Enter catch" << std::endl;
		std::cout << e.what() << std::endl;
	}
	return (0);
	
}

