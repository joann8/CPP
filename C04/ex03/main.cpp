#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"


int main()
{
	std::cout << "**Initial main**" << std::endl;
	IMateriaSource* src = new MateriaSource();
	Ice *ice = new Ice();
	Cure *cure = new Cure();
	
	src->learnMateria(ice);
	src->learnMateria(cure);

	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	
	std::cout << "\n**Add tests **\n" << std::endl;	
	std::cout << "++ use an unequip with \"wrong\" values" << std::endl;
	me->use(2, *bob);
	std::cout << "-->after me->use(2, *bob)" << std::endl;
	me->unequip(2);
	std::cout << "-->after me->unequip(2, *bob)" << std::endl;
	me->use(42, *bob);
	std::cout << "-->after me->use(42, *bob)" << std::endl;
	me->unequip(42);
	std::cout << "-->after me->unequip(42)" << std::endl;
	me->use(-42, *bob);
	std::cout << "-->after me->use(-42, *bob)" << std::endl;
	me->unequip(-42);
	std::cout << "-->after me->unequip(-42)" << std::endl;
	std::cout << "\n++ use an unequip with a good value" << std::endl;
	std::cout << "me->use(0, *bob)" << std::endl;
	me->use(0, *bob);
	me->unequip(0);
	std::cout << "-->after me->unequip(0)" << std::endl;
	std::cout << "me->use(0, *bob)" << std::endl;
	me->use(0, *bob);
	
	me->equip(src->createMateria("ice"));
	std::cout << "-->after me->equip(src->createMateria(\"ice\"))" << std::endl;
	std::cout << "-->after me->use(0, *bob)" << std::endl;
	me->use(0, *bob);

	delete bob;
	delete me;
	delete src;
	delete ice;
	delete cure;

	return 0;
}

