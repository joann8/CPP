#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap perso1("Rose");
	perso1.present();
	std::cout << std::endl;

	ScavTrap perso2("Jack");
	perso2.present();
	std::cout << std::endl << std::endl;
 	
	perso1.guardGate();
	std::cout << std::endl;
	perso1.highFivesGuys();
	std::cout << std::endl;
	perso1.whoAmI();
	std::cout << std::endl;

	while (1)
	{
		perso1.attack(perso2.getName());
		perso2.takeDamage(perso1.getAttack());
		if(perso2.getHP() == 0)
		{
			perso2.status();
			break;
		}
		perso2.beRepaired(20);
		perso2.status();
		std::cout << std::endl;
	
		perso2.attack(perso1.getName());
		perso1.takeDamage(perso2.getAttack());
		if(perso1.getHP() == 0)
		{
			perso1.status();
			break;
		}
		perso1.beRepaired(1);
		perso1.status();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
