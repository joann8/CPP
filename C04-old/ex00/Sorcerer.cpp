 #include "Sorcerer.hpp"

 Sorcerer::Sorcerer(void) : _name("defaut_name"), _title("default_title")
{
 	std::cout << this->_name << ", " << this->_title << ", is born! (default)" << std::endl;
	return ;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
 	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
 	*this = src;
 	std::cout << this->_name << ", " << this->_title << ", is born! (from copy)" << std::endl;
	return ;
}

Sorcerer::~Sorcerer(void)
{
 	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
	return ;
}
Sorcerer & Sorcerer::operator=(Sorcerer const & src)
{
	this->_name = src._name;
	this->_title = src._title;
	return *this;
}

std::string Sorcerer::getName(void) const
{
	return this->_name;
}

std::string Sorcerer::getTitle(void) const
{
	return this->_title;
}

void Sorcerer::polymorph(Victim const & src) const
{
	src.getPolymorphed();
	return ;
}

std::ostream & operator<<(std::ostream & out, Sorcerer const & src)
{
	out << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies!" << std::endl;
	return out;
}
