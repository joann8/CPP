#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form::Form("robotomy request", 72, 45), _target("default")
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form("robotomy request", 72, 45), _target(target)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form("robotomy request", 72, 45), _target(src.getTarget())
{
	*this = src;
	return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	(void)src;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return;
}

std::string const & RobotomyRequestForm::getTarget(void) const
{
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const & b) const
{	
	if (this->Form::getSignedStatus() == true)
	{
		if (this->Form::getGradeForExecute() >= b.getGrade())
		{
			if ((std::time(NULL) % 2) == 0)
				std::cout << "Bzzz Bzzz, " << this->_target << " has been robotomized." << std::endl;
			else
				std::cout << "Bzzz Bzzz, " << this->_target << " robotomatization has failed." << std::endl;
		}
		else
			throw Form::GradeTooLowExecption();
	}
	else
		std::cout << this->Form::getName() << " is not signed yet"  << std::endl;
	return;
}
