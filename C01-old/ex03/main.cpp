#include "Zombie.hpp"
#include "ZombieHorde.hpp"

static void launch_Zombie(void)
{
	Zombie new_guy("Maurice", "ZombieOnly");
	new_guy.annonce();
	return;
}

static void	launch_ZombieHorde(int n)
{
	std::cout << std::endl;
	ZombieHorde horde(n);
	std::cout << std::endl;
	horde.annonce();
	std::cout << std::endl;
	return;
}


int main()
{
	int n;
	
	n = 8;
	std::cout << std::endl << "*********Launch Zombie*********" << std::endl;
	launch_Zombie();
	std::cout << "*******************************" << std::endl << std::endl;
	std::cout << "***Launch ZombieHorde - n OK***" << std::endl;
	launch_ZombieHorde(n);
	std::cout << "*******************************" << std::endl << std::endl;
	
	std::cout << "***Launch ZombieHorde - n KO***" << std::endl;
	launch_ZombieHorde(-32);
	launch_ZombieHorde(0);
	std::cout << "*******************************" << std::endl << std::endl;
	
	return (0);
}
