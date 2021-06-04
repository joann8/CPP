#include "Convert.hpp"

Convert::Convert(void): _type(NA), _input("default")
{
	return;
}

Convert::Convert(std::string input) : _type(NA), _input(input)
{
	return;
}

Convert::Convert(Convert const & src)
{
	*this = src;
	return;
}

Convert & Convert::operator=(Convert const & src)
{
	this->_input = src.getInput();
	this->_type = src.getType();
	return (*this);
}

Convert::~Convert(void)
{
	return;
}

e_type Convert::getType(void) const
{ 
	return this->_type;
}

std::string Convert::getInput(void) const
{ 
	return this->_input;
}

void Convert::find_type(void)
{
	std::string input = this->_input;
	if (input.length() == 1 && std::isdigit(input[0]) == 0 && std::isprint(input[0]))
	{
		this->_type = CHAR;
		return;
	}
	if (input[0] == '+' || input[0] == '-')
		input.erase(0, 1);
	if (input == "inff" || input == " inff" || input == "nanf")
	{
		this->_type = FLOAT;
		return;
	}
	if (input == "inf" || input == " inf" || input == "nan")
	{
		this->_type = DOUBLE;
		return;
	}
	size_t pos;
	pos = input.find_first_not_of("0123456789");
	if (pos == input.npos)
	{
		this->_type = INT;
		return;
	}
	else if (pos == 0 || input[pos] != '.' || pos + 1 == input.length())
		return; //NA
	std::string substr = input.substr(pos + 1);
	pos = substr.find_first_not_of("0123456789");
	if (pos == substr.npos)
	{
		this->_type = DOUBLE;
		return;
	}
	else if (pos != 0 && substr[pos] == 'f' && pos + 1 == substr.length())
	{
		this->_type = FLOAT;
		return;
	}
	return; //NA
}

void Convert::print_type(void) const
{
	if (this->_type == CHAR)
		this->print_char();
	else if (this->_type == INT)
		this->print_int();
	else if (this->_type == FLOAT)
		this->print_float();
	else if (this->_type == DOUBLE)
		this->print_double();
	else
		std::cout << "Input type is invalid. Must be : CHAR or INT or FLOAT or DOUBLE" << std::endl;
}

void Convert::print_char(void) const
{
	char c = (this->_input.c_str())[0];
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" <<  std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void Convert::print_int(void) const
{
	long int i = strtol(this->_input.c_str(), NULL, 10);
	if (errno == ERANGE || i < INT_MIN || i > INT_MAX)
	{
		std::cout << "Error INT: overflow or underflow" << std::endl;
		return;
	}
	std::cout << "char: ";
	if ( i < static_cast<int>(CHAR_MIN) || i > static_cast<int>(CHAR_MAX))
		std::cout << "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(i);
		if (std::isprint(c))
			std::cout << c << std::endl;
		else
			std::cout << "non displayable" << std::endl;
	}
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << "f" <<  std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void Convert::print_float(void) const
{
	float f = strtof(this->_input.c_str(), NULL);
	if (errno == ERANGE)
	{
		std::cout << "Error FLOAT: overflow or underflow" << std::endl;
		return;
	}
	std::cout << "char: ";
	if (f < static_cast<float>(CHAR_MIN) || f > static_cast<float>(CHAR_MAX))
		std::cout << "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(f);
		if (std::isprint(c))
			std::cout << c << std::endl;
		else
			std::cout << "non displayable" << std::endl;
	}
	
	std::cout << "int: ";
	if (f < static_cast<float>(INT_MIN) || f > static_cast<float>(INT_MAX))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
	
	std::cout << "float: " << f << "f" <<  std::endl;
	std::cout << "float: " << static_cast<double>(f) << std::endl;
}

void Convert::print_double(void) const
{
	double d = strtod(this->_input.c_str(), NULL);
	if (errno == ERANGE)
	{
		std::cout << "Error DOUBLE: overflow or underflow" << std::endl;
		return;
	}
	std::cout << "char: ";
	if (d < static_cast<double>(CHAR_MIN) || d > static_cast<double>(CHAR_MAX))
		std::cout << "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(d);
		if (std::isprint(c))
			std::cout << c << std::endl;
		else
			std::cout << "non displayable" << std::endl;
	}
	
	std::cout << "int: ";
	if (d < static_cast<double>(INT_MIN) || d > static_cast<double>(INT_MAX))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
	
	std::cout << "float: ";
	if (d < static_cast<double>(FLT_MIN) || d > static_cast<double>(FLT_MAX))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}