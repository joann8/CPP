#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"
#include <sstream>

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		void setWeapon(std::string weapon_type);
		void attack(void) const;

	private:
		Weapon const _weapon_type;
		std::string _name;
};

#endif
