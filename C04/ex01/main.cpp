#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "LightSaber.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "DarkSith.hpp"
#include "Character.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	std::cout << std::endl;
	
	Enemy* a = new SuperMutant();
	Enemy* c = new DarkSith();
	AWeapon* ls = new LightSaber();
	me->attack(c);
	std::cout << *me;
	me->equip(ls);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	me->attack(a);
	me->attack(a);
	std::cout << *me;
	me->attack(a);

	return 0;
}
