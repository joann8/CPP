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
		void set_name(std::string name);

	private:
		std::string _name; 
};

Zombie* zombieHorde(int N, std::string name);

#endif
