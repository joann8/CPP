#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	unsigned int tmp;
	unsigned int tour;

	SuperTrap perso1("SUPER-Rose");
	perso1.present();
	std::cout << std::endl;

	ScavTrap perso2("S-Jack");
	perso2.present();
	std::cout << std::endl;
 	
	SuperTrap perso3("SUPER-Fred");
	perso3.present();
	std::cout << std::endl << std::endl;
 	
	srand(time(NULL));
	tour = 0;
	std::cout << perso2.getName() << " : " << perso1.getName() << ", ";
	perso2.challengeNewcomer();
	std::cout << perso1.getName() << " : No, thanks." << std::endl;
	std::cout << perso2.getName() << " : and you, " << perso3.getName() << ", ";
	perso2.challengeNewcomer();
	std::cout << perso3.getName() << " : No, Let's fight until one of us dies!" << std::endl << std::endl;

	while (tour < 100)
	{
		tmp = perso1.meleeAttack(perso2.getName());
		if (perso2.takeDamage(tmp) == 0)
			break ;
		std::cout << std::endl;
	
		tmp = perso2.meleeAttack(perso3.getName());
		if (perso3.takeDamage(tmp) == 0)
			break ;
		std::cout << std::endl;
	
		tmp = perso3.meleeAttack(perso1.getName());
		if (perso1.takeDamage(tmp) == 0)
			break ;
		std::cout << std::endl;
	
		tmp = perso1.rangedAttack(perso2.getName());
		if (perso2.takeDamage(tmp) == 0)
			break ;
		std::cout << std::endl;
	
		tmp = perso2.rangedAttack(perso3.getName());
		if (perso3.takeDamage(tmp) == 0)
			break ;
		std::cout << std::endl;
	
		tmp = perso3.rangedAttack(perso1.getName());
		if (perso1.takeDamage(tmp) == 0)
			break ;
		std::cout << std::endl;
		
		if ((tmp = perso1.vaulthunter_dot_exe(perso2.getName())) > 0)
			if (perso2.takeDamage(tmp) == 0)
				break ;
		std::cout << std::endl;
		
		perso1.ninjaShoebox(perso2);
		perso3.ninjaShoebox(perso2);
		std::cout << std::endl;
		
		perso1.status();
		perso1.beRepaired(250);
		perso1.status();
		std::cout << std::endl;
		
		perso2.status();
		perso2.beRepaired(10);
		perso2.status();
		std::cout << std::endl;
		
		perso3.status();
		perso3.beRepaired(20);
		perso3.status();
		std::cout << std::endl;

		tour++;
	}
	if (tour == 100)
	{
		std::cout << perso1.getName() << " : Damn it! We can call it even... "<< std::endl;
		std::cout << perso2.getName() << " : .. only till next fight!" << std::endl;
		std::cout << perso3.getName() << " : See you guys!" << std::endl;
	}
	std::cout << std::endl << std::endl;
	return (0);
}
