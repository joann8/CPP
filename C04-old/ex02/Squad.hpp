#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
	public:
		Squad(void);
		Squad(Squad const & src); 
		~Squad(void);
		Squad & operator=(Squad const & src);
		int getCount(void) const;
		ISpaceMarine * getUnit(int) const;
		int push(ISpaceMarine *);
		
	private:
		int _count;
		ISpaceMarine ** _units;
};

#endif
