#include "span.hpp"

int main()
{
	std::cout << "*** Span(7) ***" << std::endl;
	Span sp = Span(7);

	std::cout << "\n*** Number = 0 ***" << std::endl;
	try
	{
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n*** Number = 1 (5) ***" << std::endl;
	sp.addNumber(5);
	try
	{	
		std::cout << "Longest span : " << sp.longestSpan() <<std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n*** Number = 5 (5 - 3 - 17 - 9 - 11) ***" << std::endl;
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span : " << sp.longestSpan() <<std::endl;
	
	std::cout << "\n*** Number = 7 (5 - 3 - 17 - 9 - 11 - 1000 - 4) ***" << std::endl;		sp.addNumber(1000);
	sp.addNumber(4);
	std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span : " << sp.longestSpan() <<std::endl;
	
	std::cout << "\n*** Try number = 8 ***" << std::endl;
	try
	{
		sp.addNumber(999);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n*************************************************\n" << std::endl;

	std::cout << "\n*** Span(3) ***" << std::endl;
	Span short_sp = Span(3);
	short_sp.fill_vector();
	std::cout << "Shortest span : " << short_sp.shortestSpan() << std::endl;
	std::cout << "Longest span : " << short_sp.longestSpan() << std::endl;
	std::cout << std::endl;


	std::cout << "\n*** Span(500) ***" << std::endl;
	Span medium_sp = Span(500);
	medium_sp.fill_vector();
	std::cout << "Shortest span : " << medium_sp.shortestSpan() << std::endl;
	std::cout << "Longest span : " << medium_sp.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << "\n*** Span(1000) ***" << std::endl;
	Span large_sp = Span(1000);
	large_sp.fill_vector();
	std::cout << "Shortest span : " << large_sp.shortestSpan() << std::endl;
	std::cout << "Longest span : " << large_sp.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << "\n*** Span(10000) ***" << std::endl;
	Span extra_large_sp = Span(10000);
	extra_large_sp.fill_vector();
	std::cout << "Shortest span : " << extra_large_sp.shortestSpan() << std::endl;
	std::cout << "Longest span : " << extra_large_sp.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << "\n*** Try add to extra large ***" << std::endl;
	try
	{
		extra_large_sp.addNumber(999);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
