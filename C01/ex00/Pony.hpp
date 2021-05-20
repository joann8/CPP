#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
	public:
		Pony(std::string name, std::string color);
		~Pony();
		std::string get_name() const;
		void		talk(void) const;
	
	private:
		std::string _name;
		std::string	_color;
};

#endif
