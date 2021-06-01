#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low.";
}

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(LOW_GRADE)
{
	return;
}

Bureaucrat::Bureaucrat(std::string const & name, unsigned int grade)
	: _name(name)
{
	if (grade > LOW_GRADE)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < HIGH_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
	return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	this->_grade = src.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}

std::string const & Bureaucrat::getName(void) const
{
	return this->_name;
}

unsigned int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void Bureaucrat::upgrade(void)
{
	if (this->_grade - 1 < HIGH_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

void Bureaucrat::downgrade(void)
{
	if (this->_grade + 1 > LOW_GRADE)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

void Bureaucrat::signForm(Form & form)
{
	if (form.getSignedStatus() == true)
	{
		std::cout << this->_name << " cannot sign " << form.getName() << " because it is already signed." << std::endl;
		return;
	}
	if (this->_grade <= form.getGradeForSign())
	{
		std::cout << this->_name << " sign " << form.getName() << std::endl;
		form.beSigned(*this);
	}
	else
	{
		std::cout << this->_name << " cannot sign " << form.getName() << " because ";
		form.beSigned(*this);
	}
	return;
}
		
std::ostream & operator<<(std::ostream & out, Bureaucrat const & src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl; 
	return out;
}

