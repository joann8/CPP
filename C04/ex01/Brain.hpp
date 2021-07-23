#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & src);
		~Brain(void);
		Brain & operator=(Brain const & src);

		std::string *getIdeas(void);

	protected:
		std::string _ideas[100];
};

#endif
