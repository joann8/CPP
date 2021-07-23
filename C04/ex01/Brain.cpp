 #include "Brain.hpp"

 Brain::Brain(void)  
 {
 	std::cout << "--> got a brain!" << std::endl;
	return ;
}

Brain::Brain(Brain const & src)
 {
 	*this = src;
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
//	std::copy(src._ideas, src._ideas + 99, this->_ideas);
	return *this;
}

std::string *Brain::getIdeas(void)
{
	return _ideas;
}
