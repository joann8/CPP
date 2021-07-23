#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{	
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
	
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		
		class FormNotSigned : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		
		class FormAlreadySigned : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
	

		Form(std::string const & name, unsigned int grade_for_sign, unsigned int grade_for_execute, bool signed_status);
		Form(Form const & src);
		virtual ~Form(void);
		Form & operator=(Form const & src);

		std::string const & getName(void) const;
		unsigned int getGradeForSign(void) const;
		unsigned int getGradeForExecute(void) const;
		bool getSignedStatus(void) const;
		
		void beSigned(const Bureaucrat & b);
		virtual void execute(Bureaucrat const & executor) const = 0;
		void checkFormExec(const Bureaucrat & executor) const;

	private:
		Form(void);
		std::string const _name;
		bool _signed;
		unsigned int _grade_for_sign;
		unsigned int _grade_for_execute;


};

std::ostream & operator<<(std::ostream & out, Form const & src);

#endif
