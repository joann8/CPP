#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw()
{
	return "this form requites a lower grade";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "this form requires an higher grade";
}

const char* Form::FormAlreadySigned::what() const throw()
{
	return "this form is already signed";
}

Form::Form(void) : _name("default"), _signed(false), _grade_for_sign(LOW_GRADE), _grade_for_execute(LOW_GRADE)
{
	return;
}

Form::Form(std::string const & name, unsigned int grade_for_sign, unsigned int grade_for_execute)
	: _name(name), _signed(0), _grade_for_sign(grade_for_sign), _grade_for_execute(grade_for_execute)
{
	if (grade_for_sign > LOW_GRADE || grade_for_execute > LOW_GRADE)
		throw Form::GradeTooLowException();
	else if (grade_for_sign < HIGH_GRADE || grade_for_execute < HIGH_GRADE)
		throw Form::GradeTooHighException();
	return;
}

Form::Form(Form const & src)
{
	*this = src;
	return;
}

Form & Form::operator=(Form const & src)
{
	this->_signed = src.getSignedStatus();
	return *this;
}

Form::~Form(void)
{
	return;
}

std::string const & Form::getName(void) const
{
	return this->_name;
}

unsigned int Form::getGradeForSign(void) const
{
	return this->_grade_for_sign;
}

unsigned int Form::getGradeForExecute(void) const
{
	return this->_grade_for_execute;
}

bool Form::getSignedStatus(void) const
{
	return this->_signed;
}

void Form::beSigned(const Bureaucrat & b)
{
	if (this->_signed == true)
		throw Form::FormAlreadySigned();
	else if (this->_grade_for_sign < b.getGrade())
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
	return;
}

std::ostream & operator<<(std::ostream & out, Form const & src)
{
	std::string status = src.getSignedStatus() ? "signed" : "not signed";

	out << src.getName() << ", form that can be signed by a bureaucrat with grade " << src.getGradeForSign() << " and execute by a bureaucrat with grade " << src.getGradeForExecute() << std::endl << "Status : " << status << std::endl; 
	return out;
}

