#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string name, std::string type);
		~Zombie();
		void annonce() const;
		void create(std::string name, std::string type);

	private:
		std::string _name; 
		std::string _type;
};

#endif
