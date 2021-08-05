#ifndef SPAN_HPP

#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <climits>

class Span
{
	class TooManyNumbers : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};


	class NotEnoughNumbers : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	public:
		Span(unsigned int n);
		~Span(void);
		Span(Span const & src);
		Span & operator=(Span const & src);

		unsigned int getN(void) const;
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
		void addNumber(int number);
		void fill_vector(void);

	private:
		Span(void);
		std::vector<int> _container_int;
		unsigned int _n;
};

#endif
