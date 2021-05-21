#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
	public:
		Human(void);
		~Human(void);
		std::string identify(void) const;
		Brain const &getBrain(void) const;

	private:
		Brain const _brain;
};

#endif
