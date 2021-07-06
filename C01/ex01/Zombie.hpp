#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie();
		void annonce();

	private:
		std::string _name; 
};

Zombie* zombieHorde(int N, std::string name);

#endif
