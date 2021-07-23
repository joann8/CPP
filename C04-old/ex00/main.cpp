#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Outcast.hpp"

/*
int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	
	std::cout << robert << jim << joe;
	
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}*/

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Outcast isa("Isa");
	
	std::cout << robert << jim << joe << isa;
	
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(isa);
	return 0;
}
