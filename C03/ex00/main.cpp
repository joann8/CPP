#include "FragTrap.hpp"

int main()
{
	unsigned int tmp;

	FragTrap perso1 = FragTrap("Lola");
	//FragTrap perso = FragTrap("Lola");
	//FragTrap perso2 = FragTrap(&perso);
	FragTrap perso2 = FragTrap("Jacob");

	std::cout << std::endl << std::endl;
 	srand(time(NULL));
	while (1)
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
	
		perso1.beRepaired(35);
		perso1.status();
		std::cout << std::endl;
		perso2.beRepaired(40);
		perso2.status();
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
	return (0);
}
