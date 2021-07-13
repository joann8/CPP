#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"
#include <sstream>

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		void setWeapon(Weapon &weapon);
		void attack(void) const;

	private:
		std::string _name;
		Weapon *_weapon;
};

#endif
