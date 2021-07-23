#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{

	std::cout << "\n*********************\n Test from subject\n\n";
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak	
	delete i;

	std::cout << "\n*********************\n Test from deep copy\n";
	std::cout << "(deep copy = allocating values + ressources (heap))\n" << std::endl;
	
	Dog a;
	Dog b;
	Dog c(a);

	b = a;

	std::cout << "Address brain A: " << a.getBrain() << std::endl;
	std::cout << "Address brain B: " << b.getBrain() << std::endl;
	std::cout << "Address brain C: " << c.getBrain() << std::endl;
	
	std::cout << "\n*********************\n Test Tab 10 animals\n\n";


	unsigned int k;
	unsigned int n;

	std::cout << "Please enter a value for n (1 - 20): ";
	std::cin >> n;
	while (n <= 0 || n > 20)
	{
		std::cout << "Wrong value" << std::endl;
		std::cout << "Please enter a value for n (1 - 20): ";
		std::cin >> n;
	}
	const Animal* animal_tab[n];
	k = 0;
	while (k < n / 2)
	{
		animal_tab[k] = new Dog();
		k++;
	}
	while (k < n)
	{
		animal_tab[k] = new Cat();
		k++;
	}
	
	k = 0;
	while (k < n)
	{
		delete animal_tab[k];
		k++;
	}
	return (0);
}
