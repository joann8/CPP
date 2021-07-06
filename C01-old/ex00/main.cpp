#include "Pony.hpp"


void	poneyOnTheHeap()
{
	Pony*	pony_heap = new Pony("Noisette", "brown");

	pony_heap->talk();
	delete (pony_heap);
}

void	poneyOnTheStack()
{
	Pony	pony_stack = Pony("Cococloche", "yellow");
	
	pony_stack.talk();
}


int main()
{
	std::cout << "***from the main : launching Poney on the stack***" << std::endl;
	poneyOnTheStack();
	std::cout << "***from the main : Poney on the stack is over***" << std::endl << std::endl;
	std::cout << "***from the main : launching Poney on the Heap***" << std::endl;
	poneyOnTheHeap();
	std::cout << "***from the main : Poney on the Heap is over***" << std::endl;
	return (0);
}
