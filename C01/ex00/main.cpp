#include "Zombie.hpp"

int main()
{
	std::cout << "******Zombie - random*****" << std::endl;
	randomChump("Marie-Lise");
	std::cout << "*******************************" << std::endl << std::endl;
	
	std::cout << "****Zombie - newZombie****" << std::endl;
	Zombie *new_girl = newZombie("Lola");
	new_girl->annonce();
	delete new_girl;
	std::cout << "*******************************" << std::endl << std::endl;
	
	return (0);
}
