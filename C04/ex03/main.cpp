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
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

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
	
	//
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
	std::cout << "me->use(1, *bob)" << std::endl;
	me->use(1, *bob);
	me->unequip(0);
	std::cout << "-->after me->unequip(0) - 1 become 0 index" << std::endl;
	std::cout << "me->use(0, *bob)" << std::endl;
	me->use(0, *bob);
	std::cout << "\n++ XP test" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << "XP: " << tmp->getXP() << std::endl;
	me->use(1, *bob);
	std::cout << "XP: " << tmp->getXP() << std::endl;
	me->use(1, *bob);
	std::cout << "XP: " << tmp->getXP() << std::endl;

	//
	delete bob;
	delete me;
	delete src;
	return 0;
}

