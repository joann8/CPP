#ifndef LIGHTSABER_HPP
#define LIGHTSABER_HPP

#include "AWeapon.hpp"

class LightSaber : public AWeapon
{
	public:
		LightSaber(void);
		LightSaber(LightSaber const & src);
		~LightSaber(void);
		LightSaber & operator=(LightSaber const & src);

		virtual void attack(void) const;
};

#endif
