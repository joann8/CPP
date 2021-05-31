#ifndef DARKSITH_HPP
#define DARKSITH_HPP

#include "Enemy.hpp"

class DarkSith : public Enemy
{

	public:
		DarkSith(void);
		DarkSith(DarkSith const & src);
		virtual ~DarkSith();
		DarkSith & operator=(DarkSith const & src);
};

#endif
