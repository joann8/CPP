#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <ctime>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm & operator=(RobotomyRequestForm const & src);

		void execute(Bureaucrat const & executor) const;
		std::string const & getTarget(void) const;
	
	private:
		std::string const _target;
};

#endif
