#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <cstring>
#include <string>
#include <iostream>
#include <climits> 
#include <iomanip>
#include <cstdlib>
#include <cfloat>
#include <cerrno>

enum e_type
{
	NA,
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

class Convert
{
	public:
		Convert(std::string input);
		Convert(Convert const & src);
		~Convert(void);
		Convert & operator=(Convert const & src);

		e_type getType(void) const;
		std::string getInput(void) const;
	
		void find_type(void);
		void print_type(void) const;
		void print_char(void) const;
		void print_int(void) const;
		void print_float(void) const;
		void print_double(void) const;


	private:
		Convert();	
		e_type _type;
		std::string _input;
};

 #endif

