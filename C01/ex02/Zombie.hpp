#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void annonce();
		std::string get_name() const;
		std::string get_type() const;
		std::string set_type(std::string type);

	private:
		std::string _name; 
		std::string _type;
};

#endif
