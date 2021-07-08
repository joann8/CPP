#include "ClapTrap.hpp"

int main()
{

	ClapTrap perso1("Rose");
	perso1.present();
	std::cout << std::endl;

	ClapTrap tmp_frag("Jack");
	ClapTrap &tmp_ref = tmp_frag;
	ClapTrap perso2(tmp_ref);
	perso2.present();
	std::cout << std::endl << std::endl;
 	
	perso1.attack(perso2.getName());
	perso2.takeDamage(perso1.getAttack());
	perso2.beRepaired(5);
	perso2.status();
	std::cout << std::endl << std::endl;
	
	perso2.attack(perso1.getName());
	perso1.takeDamage(perso2.getAttack());
	perso1.beRepaired(2);
	perso1.status();
	std::cout << std::endl << std::endl;
	
	return (0);
}
