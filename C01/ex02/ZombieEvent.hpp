#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include <iostream>
#include <string>

class ZombieEvent
{
	public:
		ZombieEvent();
		~ZombieEvent();
		setZombieType();
		Zombie * newZombie (std::string name);
		std::string randomChump();
};

#endif
