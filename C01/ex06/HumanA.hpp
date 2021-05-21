#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"
#include <sstream>

class HumanA
{
	public:
		HumanA(std::string name, std::string weapon_type);
		~HumanA(void);
		void attack(void) const;

	private:
		Weapon const _weapon_type;
		std::string _name;
};

#endif
