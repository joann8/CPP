#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include <iostream>
#include <string>
#include <cstdlib> //rand
#include <ctime> //to initialize randome seed
#include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void setZombieType(std::string type);
		Zombie * newZombie (std::string name);
		void randomChump(void) const;

	private:
		std::string _zombie_type;
};

#endif
