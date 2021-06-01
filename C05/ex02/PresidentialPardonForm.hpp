#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & src);

		void execute(Bureaucrat const & executor) const;
		std::string const & getTarget(void) const;
	
	private:
		std::string const _target;
};

#endif
