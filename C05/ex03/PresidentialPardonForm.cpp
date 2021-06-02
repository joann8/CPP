#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form::Form("presidential pardon", 25, 5), _target("default")
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("presidential pardon", 25, 5), _target(target)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form("presidential pardon", 25, 5), _target(src.getTarget())
{
	*this = src;
	return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	(void)src;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return;
}

std::string const & PresidentialPardonForm::getTarget(void) const
{
	return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const & b) const
{
	this->Form::checkFormExec(b);
	std::cout << this->_target << " has been forgiven by Zafod Beeblebrox" << std::endl;
	return;
}
