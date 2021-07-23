 #include "Outcast.hpp"

 Outcast::Outcast(void)
 {
 	std::cout << "Hey Ho!" << std::endl;
	return ;
}

Outcast::Outcast(std::string name) : Victim::Victim(name)
 {
 	std::cout << "Hey Ho!" << std::endl;
	return ;
}

Outcast::Outcast(Outcast const & src) : Victim(src)
 {
 	*this = src;
 	std::cout << "Hey Ho!"<< std::endl;
	return ;
}

Outcast::~Outcast(void)
{
 	std::cout << "en vous souhaitant une belle journée..." << std::endl;
	return ;
}

Outcast & Outcast::operator=(Outcast const & src)
{
	this->_name = src._name;
	return *this;
}

void Outcast::getPolymorphed(void) const
{	
	std::cout << this->_name << " has been turned into a yellow otter!" << std::endl;
	return ;
}
