#include "Zombie.hpp"
#include "ZombieEvent.hpp"

static void launch_Zombie(void)
{
	Zombie new_guy("Maurice", "ZombieOnly");
	new_guy.annonce();
	return;
}

static void	launch_ZombieEvent_newZombie(void)
{
	ZombieEvent zombie_event;

	zombie_event.setZombieType("Dynamic");
	Zombie *new_guy =  zombie_event.newZombie("Fabrice");
	new_guy->annonce();
	Zombie *new_girl =  zombie_event.newZombie("Lola");
	new_girl->annonce();
	delete new_girl;
	delete new_guy;
	return;
}

static void	launch_ZombieEvent_random(void)
{
	ZombieEvent zombie_event;

	zombie_event.setZombieType("Static");
	zombie_event.randomChump();
	return;
}


int main()
{
	std::cout << std::endl << "*********Launch Zombie*********" << std::endl;
	launch_Zombie();
	std::cout << "*******************************" << std::endl << std::endl;
std::cout << "******ZombieEvent - random*****" << std::endl;
	launch_ZombieEvent_random();
	std::cout << "*******************************" << std::endl << std::endl;
	std::cout << "****ZombieEvent - newZombie****" << std::endl;
	launch_ZombieEvent_newZombie();
	std::cout << "*******************************" << std::endl << std::endl;
	
	return (0);
}
