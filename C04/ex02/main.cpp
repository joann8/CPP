#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
//	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	std::cout << std::endl;
	
	i->makeSound(); 
	j->makeSound();
//	meta->makeSound();

	std::cout << std::endl;
	
//	delete meta;
	delete i;
	delete j;
	
	return (0);
}
