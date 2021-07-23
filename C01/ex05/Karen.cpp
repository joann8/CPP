#include "Karen.hpp"

Karen::Karen(void) 
{
	std::cout << "**A new Karen is born**" << std::endl;
	return;
}

Karen::~Karen()
{
	std::cout << "**A Karen died**" << std::endl;
	return ;
}

void Karen::complain(std::string level)
{
	std::map<std::string, f_ptr> map;

	map["INFO"] = &Karen::info;
	map["DEBUG"] = &Karen::debug;
	map["WARNING"] = &Karen::warning;
	map["ERROR"] = &Karen::error;

	if (map[level])
		(this->*map[level])();
	else
		std::cout << "Karen is complaining about something we don't understand." << std::endl;
	return;
}

void Karen::debug(void)
{
	std::cout << "J'aime avoir du bacon supplémentaire pour mon burger 7XL-double-cheese-triple-pickle-special-ketchup. J'adore ça!" << std::endl;
	return ;
}

void Karen::info(void)
{
	std::cout << "Je ne peux pas croire que l’ajout de bacon supplémentaire coûte plus cher. Vous n’enmettez pas assez ! Si vous le faisiez, je n’aurais pas à le demander !" << std::endl;
	return;
}

void Karen::warning(void)
{
	std::cout << "Je pense que je mérite d’avoir du bacon supplémentaire gratuitement. Je viens ici depuis des années et vous n’avez commencé à travailler ici que le mois dernier." << std::endl;
	return;
}

void Karen::error(void)
{
	std::cout << "C’est inacceptable, je veux parler au responsable maintenant!" << std::endl;
	return;
}
