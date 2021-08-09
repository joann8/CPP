#include <ctime>
#include <cstdlib>
#include <iostream>
#include "Base.hpp"

Base *generate(void)
{
	std::srand(std::time(NULL));
	int i = rand() % 3;

	switch (i)
	{
		case 0:
			std::cout << "Instance of A generated" << std::endl;
			return new A;
		case 1:
			std::cout << "Instance of B generated" << std::endl;
			return new B;
		case 2:
			std::cout << "Instance of C generated" << std::endl;
			return new C;
	}
	std::cout << "Error happened while generating a Base" << std::endl;
	return NULL;
}

void identify_from_pointer(Base *p)
{
	std::cout << "***Identify from PTR ***" << std::endl;
	//return NULL si la conversion n'est pas possible
	
	A * a_ptr = dynamic_cast<A*>(p);
	if (a_ptr != NULL)
	{
		std::cout << "ptr type -> A" << std::endl;
		return;
	}
	else
		std::cout << "ptr type is not A." << std::endl;
	
	B * b_ptr = dynamic_cast<B*>(p);
	if (b_ptr != NULL) 
	{
		std::cout << "ptr type -> B" << std::endl;
		return;
	}
	else
		std::cout << "ptr type is not B." << std::endl;

	C * c_ptr = dynamic_cast<C*>(p);
	if (c_ptr != NULL) 
	{
		std::cout << "ptr type -> C" << std::endl;
		return;
	}
	else
		std::cout << "ptr type is not C." << std::endl;
	
	std::cout << "Error happend while identifying from pointer" << std::endl;
	return;
}

void identify_from_reference(Base &p)
{	
	std::cout << "***Identify from REF ***" << std::endl;
	//Ne peut pas retourner NULL car ref
	try
	{
		A & a_ptr = dynamic_cast<A&>(p);
		static_cast<void>(a_ptr);
		std::cout << "ref type -> A" << std::endl;
		return;
	}
	catch (...)
	{
		std::cout << "ref type is not A." << std::endl;
	}
	
	try
	{
		B & b_ptr = dynamic_cast<B&>(p);
		static_cast<void>(b_ptr);
		std::cout << "ref type -> B" << std::endl;
		return;
	}
	catch (...)
	{
		std::cout << "ret type is not B." << std::endl;
	}

	try
	{
		C & c_ptr = dynamic_cast<C&>(p);
		static_cast<void>(c_ptr);
		std::cout << "ref type -> C" << std::endl;
		return;
	}
	catch (...)
	{
		std::cout << "ref type is not C." << std::endl;
	}

	std::cout << "Error happend while identifying from reference" << std::endl;
	return;
}

int main()
{
	Base * base = generate();

	Base &ref = *base;
	Base *ptr = base;

	identify_from_pointer(ptr);
	identify_from_reference(ref);

	delete base;
}
	
	
