#ifndef EASYFIND_HPP

#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>

class NotFound : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return "Value not found in the container";
		}
};

template <typename T>
typename T::const_iterator easyfind(T const & container, int const value)
{
	typename T::const_iterator cit = std::find(container.begin(), container.end(), value);
	if (cit == container.end())
		throw NotFound();
	return cit;
}

#endif
