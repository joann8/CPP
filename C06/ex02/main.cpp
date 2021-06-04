#include <ctime>
#include <cstdlib>
#include <iostream>
#include "Base.hpp"

Base *generate(void)
{
	std::srand(std::time(NULL));
	int a = rand() % 3;
	if (a == 0)
		return new A;
	else if (a == 1)
		return new B;
	else if (a == 2)
		return new C;
	std::cout << "Error happened while generating a Base" << std::endl;
	return NULL;
}

void identify_from_pointer(Base *p)
{
	//return NULL si la conversion n'ets pas possible
	A * a_ptr = dynamic_cast<A*>(p);
	if (a_ptr != NULL)
	{
		std::cout << "ptr type -> A" << std::endl;
		return;
	}
	B * b_ptr = dynamic_cast<B*>(p);
	if (b_ptr != NULL) 
	{
		std::cout << "ptr type -> B" << std::endl;
		return;
	}

	C * c_ptr = dynamic_cast<C*>(p);
	if (c_ptr != NULL) 
	{
		std::cout << "ptr type -> C" << std::endl;
		return;
	}
	std::cout << "Error happend while identifying from pointer" << std::endl;
	return;
}

void identify_from_reference(Base &p)
{	
	//Ne peut pas retourner NULL car ref
	try
	{
		A & a_ptr = dynamic_cast<A&>(p);
		static_cast<void>(a_ptr);
		std::cout << "A" << std::endl;
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
		std::cout << "B" << std::endl;
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
		std::cout << "C" << std::endl;
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
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete base;
	
	

}
	
	
