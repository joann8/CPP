#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);

		void execute(Bureaucrat const & executor) const;
		std::string const & getTarget(void) const;
	
	private:
		std::string const _target;
};

#endif
