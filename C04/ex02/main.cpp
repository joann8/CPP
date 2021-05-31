#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	
	Squad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	//TESTS ADDITIONNELS
	std::cout << std::endl << "getCount = " << vlc->getCount() << std::endl;
	std::cout << "vlc->push(bob) && vlc->push(NULL)" << std::endl;
	vlc->push(bob); 
	vlc->push(NULL);
	std::cout << "getCount = " << vlc->getCount() << std::endl;

	std::cout << std::endl <<  "getUnit (0) = " << vlc->getUnit(0) << std::endl;
	std::cout << "getUnit (1) = " << vlc->getUnit(1) << std::endl;
	std::cout << "getUnit (2) = " << vlc->getUnit(2) << std::endl;
	std::cout << "getUnit (-1) = " << vlc->getUnit(-1) << std::endl;
	
	std::cout << std::endl << "Construct by copy" << std::endl;
	ISquad* copy = new Squad(*vlc);
	
	std::cout << "src: getCount() = " << vlc->getCount() << " | getUnit(0) = " << vlc->getUnit(0) << std::endl;
	std::cout << "copy: getCount() = " << copy->getCount() << " | getUnit(0) = " << copy->getUnit(0) << std::endl;
	delete copy;
	// END ADDITIONNELS

	delete vlc;
	
	return 0;
}
