 #include "Victim.hpp"

 Victim::Victim(void) : _name("defaut_name")
 {
 	std::cout << "Some random victim called " << this->_name << " just appeared! (from default)" << std::endl;
	return ;
}

Victim::Victim(std::string name) : _name(name)
 {
 	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
	return ;
}

Victim::Victim(Victim const & src)
 {
 	*this = src;
 	std::cout << "Some random victim called " << this->_name << " just appeared!(from copy)" << std::endl;
	return ;
}

Victim::~Victim(void)
{
 	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
	return ;
}

Victim & Victim::operator=(Victim const & src)
{
	this->_name = src._name;
	return *this;
}

std::string Victim::getName(void) const
{
	return this->_name;
}

void Victim::getPolymorphed(void) const
{	
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & out, Victim const & src)
{
	out << "I am " << src.getName() << " and I like otters!" << std::endl;
	return out;
}
