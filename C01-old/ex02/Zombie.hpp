#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie(std::string name, std::string type);
		~Zombie();
		void annonce();

	private:
		std::string _name; 
		std::string _type;
};

#endif
