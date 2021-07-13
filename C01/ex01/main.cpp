#include "Zombie.hpp"

static void	launch_ZombieHorde(int n)
{
	std::cout << "\n----begin ZombieHorde function\n";
	Zombie *horde = zombieHorde(n, "Jane");
	std::cout << "----end ZombieHorde function\n\n";
	int i = 0;
	while (i < n)
	{
		horde[i].annonce();
		i++;
	}
	std::cout << std::endl;
	delete [] horde;
	return;
}

int main()
{
	int n;
	
	n = 8;
	std::cout << "***Launch ZombieHorde - n OK***" << std::endl;
	launch_ZombieHorde(n);
	std::cout << "*******************************" << std::endl << std::endl;
	launch_ZombieHorde(1);
	std::cout << "*******************************" << std::endl << std::endl;
	
	std::cout << "***Launch ZombieHorde - n KO***" << std::endl;
	launch_ZombieHorde(-32);
	std::cout << "*******************************" << std::endl << std::endl;
	launch_ZombieHorde(0);
	std::cout << "*******************************" << std::endl << std::endl;
	
	return (0);
}
