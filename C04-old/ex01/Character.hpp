#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	public:
		Character(std::string const & name);
		Character(Character const & src);
		~Character();
		Character & operator=(Character const & src);

		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string getName() const;
		AWeapon * getWeapon() const;
		int getAP() const;
	
	private:
		Character(void);
		std::string _name;
		int _ap;
		int _max_ap;
		AWeapon * _weapon;
};

std::ostream & operator<<(std::ostream & out, Character const & src);

#endif
