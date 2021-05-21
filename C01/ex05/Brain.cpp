#include "Brain.hpp"

Brain::Brain()
{
	return ;
}

Brain::~Brain()
{
	return ;
}

std::string Brain::identify(void) const
{
	std::stringstream brain_address;

	brain_address << "0x" << std::hex << std::uppercase << (unsigned long int)this;
	return (brain_address.str());
}
