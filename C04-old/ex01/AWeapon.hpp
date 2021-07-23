#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & src);
		~AWeapon(void);
		AWeapon & operator=(AWeapon const & src);
		std::string getName(void) const;

		int getAPCost(void) const;
		int getDamage(void) const;
		virtual void attack(void) const = 0;
	
	protected:
		AWeapon(void);
		std::string _name;
		int _ap;
		int _damage;
};

#endif
