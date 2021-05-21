#ifndef ZOMBIE_HORDE
#define ZOMBIE_HORDE

#include <iostream>
#include <ctime>
#include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int n);
		~ZombieHorde(void);
		void annonce() const;
		std::string randomName(void) const;
	
	private:
		std::string _zombie_type;
		int			_size; 
		Zombie		*_horde;

};

#endif
