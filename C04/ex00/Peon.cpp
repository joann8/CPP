 #include "Peon.hpp"

 Peon::Peon(void)
 {
 	std::cout << "Zog, zog" << std::endl;
	return ;
}

Peon::Peon(std::string name) : Victim::Victim(name)
 {
 	std::cout << "Zog, zog." << std::endl;
	return ;
}

Peon::Peon(Peon const & src) : Victim(src)
 {
 	*this = src;
 	std::cout << "Zog, zog." << std::endl;
	return ;
}

Peon::~Peon(void)
{
 	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon & Peon::operator=(Peon const & src)
{
	this->_name = src._name;
	return *this;
}

void Peon::getPolymorphed(void) const
{	
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
	return ;
}
