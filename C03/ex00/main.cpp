#include "FragTrap.hpp"

int main()
{
	unsigned int tmp;
	unsigned int tour;

	FragTrap perso1("Rose");
	FragTrap tmp_frag("Jack");
	FragTrap &tmp_ref = tmp_frag;
	FragTrap perso2(tmp_ref);

	std::cout << std::endl << std::endl;
 	srand(time(NULL));
	tour = 0;
	while (tour < 100)
	{
		tmp = perso1.meleeAttack(perso2.getName());
		if (perso2.takeDamage(tmp) == 0)
			break ;
		std::cout << std::endl;
	
		tmp = perso2.rangedAttack(perso1.getName());
		if (perso1.takeDamage(tmp) == 0)
			break ;

		std::cout << std::endl;
		
		if ((tmp = perso1.vaulthunter_dot_exe(perso2.getName())) > 0)
			if (perso2.takeDamage(tmp) == 0)
				break ;
		std::cout << std::endl;

		tmp = perso2.meleeAttack(perso1.getName());
		if (perso1.takeDamage(tmp) == 0)
			break ;
		std::cout << std::endl;
	
		tmp = perso1.rangedAttack(perso2.getName());
		if (perso2.takeDamage(tmp) == 0)
			break ;
		std::cout << std::endl;
			
		if ((tmp = perso2.vaulthunter_dot_exe(perso1.getName())) > 0)
			if (perso1.takeDamage(tmp) == 0)
				break ;
		std::cout << std::endl;
	
		perso1.beRepaired(25);
		perso1.status();
		std::cout << std::endl;
		perso2.beRepaired(10);
		perso2.status();
		std::cout << std::endl;
		tour++;
	}
	if (tour == 100)
	{
		std::cout << perso1.getName() << " : Damn it! We can call it even... "<< std::endl;
		std::cout << perso2.getName() << " : .. only till next fight!" << std::endl;
	}

	std::cout << std::endl << std::endl;
	return (0);
}
