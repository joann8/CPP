#ifndef ITER_HPP

#define ITER_HPP

#include <iostream>

template<typename T>
void print_function(T const & src)
{
	std::cout << src << std::endl;
	return;
}

template <typename T>
void iter(T const *arr, unsigned int len, void(ptr_f)(T const & src))
{
	for (unsigned int i = 0; i < len; i++)
		ptr_f(arr[i]);
	return;
}

#endif
