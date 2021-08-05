#include "mutantstack.hpp"
#include <list>

void mstack_test()
{
	std::cout << "---> MutantStack" << std::endl;
	
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void list_test()
{
	std::cout << "\n---> LIST" << std::endl;
	
	std::list<int> list;
	
	list.push_back(5);
	list.push_back(17);
	
	std::cout << list.back() << std::endl;
	
	list.pop_back();
	
	std::cout << list.size() << std::endl;
	
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);
	
	std::list<int>::iterator it = list.begin();
	std::list<int>::iterator ite = list.end();
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void detailed_test(void)
{
	MutantStack<int> mstack;

	std::cout << "\n----> Regular Tests <----" << std::endl;
	std::cout << "Mutant stack with 2 elmts: 5 and 17" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top() : " << mstack.top() << std::endl;
	std::cout << "pop() >> top() : ";
	mstack.pop();
	std::cout << mstack.top() << std::endl;
	std::cout << "size() : " << mstack.size() << std::endl;
	std::cout << "Let's add 5 numbers in the mutant stack: 3, 89, 737, 0, 42" <<std::endl;
	mstack.push(3);
	mstack.push(89);
	mstack.push(737);
	mstack.push(0);
	mstack.push(42);
	std::cout << "top() : " << mstack.top() << " and size() : " << mstack.size() <<std::endl;
	
	std::cout << "\n----> Iterator Tests <----" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "The first iterator contains: " << *it << std::endl;
	std::cout << "The incremented begin iterator (== the second element) contains: " << *(++it) << std::endl;
	std::cout << "The last element of the stack contains: " << *(--ite) << std::endl;

	std::cout << "The full list with reseted iterators: ";
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << ", ";
		++it;
	}
	std::cout << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	std::cout << "Reverse begin iterator: " << *rit << std::endl;
	
	std::cout << "\n----> Copy Tests <----" << std::endl;
	std::cout << "Copy the mutant stack in a stack container s" << std::endl;
	std::stack<int> s(mstack);
	std::cout << "--> s.top() : " << s.top() << std::endl;
	std::cout << "-->s.pop() >> s.top() : ";
	s.pop();
	std::cout << s.top() << std::endl;
}

int main()
{
	std::cout << "*** TESTS FROM SUBJECT ***" << std::endl;
	list_test();
	mstack_test();
	std::cout << "\n****************************" << std::endl;
	
	std::cout << "\n*** DETAILED TESTS ***" << std::endl;
	detailed_test();
	
	return 0;
}
