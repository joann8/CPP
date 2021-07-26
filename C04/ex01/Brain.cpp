 #include "Brain.hpp"

 Brain::Brain(void)  
 {
 	std::cout << "--> got a brain!" << std::endl;
	return ;
}

Brain::Brain(Brain const & src)
 {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
 	std::cout << "--> got a brain! (from copy)" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "<-- brain removed" << std::endl;
	return ;
}

Brain & Brain::operator=(Brain const & src)
{
	if (&src == this)
		return *this;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	return *this;
}

std::string *Brain::getIdeas(void)
{
	return _ideas;
}
