#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{

	ClapTrap perso1("Rose");
	perso1.present();
	std::cout << std::endl;

	ScavTrap perso2("Jack");
	perso2.present();
	std::cout << std::endl << std::endl;
 	
	FragTrap perso3("Luc");
	perso3.present();
	std::cout << std::endl << std::endl;
 	
	while (1)
	{
		perso2.attack(perso3.getName());
		perso3.takeDamage(perso2.getAttack());
		if(perso3.getHP() == 0)
		{
			perso3.status();
			break;
		}
		perso3.beRepaired(5);
		perso3.status();
		std::cout << std::endl;
	
		perso2.guardGate();
		std::cout << std::endl;
		
		perso3.highFivesGuys();
		std::cout << std::endl;

		perso3.attack(perso1.getName());
		perso1.takeDamage(perso3.getAttack());
		if(perso1.getHP() == 0)
		{
			perso1.status();
			break;
		}
		perso1.beRepaired(2);
		perso1.status();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
