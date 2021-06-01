#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

#define LOW_GRADE 150
#define HIGH_GRADE 1

class Bureaucrat
{
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
	
	public:
		Bureaucrat(std::string const & name, unsigned int grade);
		Bureaucrat(Bureaucrat const & src);
		virtual ~Bureaucrat(void);
		Bureaucrat & operator=(Bureaucrat const & src);

		std::string const & getName(void) const;
		unsigned int getGrade(void) const;
		
		void upgrade(void);
		void downgrade(void);

	private:
		Bureaucrat(void);
		std::string const _name;
		int _grade;

};

std::ostream & operator<<(std::ostream & out, Bureaucrat const & src);

#endif
