#include "span.hpp"

char const * Span::TooManyNumbers::what() const throw()
{
	return "This Span cannot store more numbers";
}

char const * Span::NotEnoughNumbers::what() const throw()
{
	return "This Span does not contains enough numbers";
}

Span::Span(void) : _n(0)
{
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::~Span(void)
{
}

Span::Span(Span const & src)
{
	*this = src;
	return;
}

Span & Span::operator=(Span const & src)
{
	if (this == & src)
		return *this;
	this->_n = src.getN();
	this->_container_int = std::vector<int>(src._container_int);
	return *this;
}

unsigned int Span::getN(void) const
{
	return this->_n;
}

void Span::addNumber(int number)
{
	if (this->_container_int.size() < getN())
		this->_container_int.push_back(number);
	else
		throw Span::TooManyNumbers();
}

unsigned int Span::shortestSpan(void)
{
	if (this->_container_int.size() < 2)
		throw Span::NotEnoughNumbers();
	std::sort(this->_container_int.begin(), this->_container_int.end());

	unsigned int shortest_span = UINT_MAX;
	unsigned int current_span;
	std::vector<int>::iterator i= this->_container_int.begin();
	std::vector<int>::iterator j = this->_container_int.begin();
	std::vector<int>::const_iterator end = this->_container_int.end();
	while (i != end)
	{
		j = i +1;
		while (j != end)
		{
			if (*i > *j)
				current_span = *i - *j;
			else
				current_span = *j - *i;
			if (current_span < shortest_span)
				shortest_span = current_span;
			j++;
		}
		i++;
	}
	return shortest_span;
}

unsigned int Span::longestSpan(void) 
{
	if (this->_container_int.size() < 2)
		throw Span::NotEnoughNumbers();
	return (*std::max_element(this->_container_int.begin(), this->_container_int.end())
			- *std::min_element(this->_container_int.begin(), this->_container_int.end()));
}

void Span::fill_vector(void)
{
	while(this->_container_int.size() < getN())
		this->_container_int.push_back(std::rand());
	return;
}
