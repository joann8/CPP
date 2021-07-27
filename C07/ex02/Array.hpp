#ifndef ARRAY_HPP

#define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

template<typename T>

class Array
{
	class OutOfLimitsException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return "This element is out of the limits";
			}
	};

	public:
		Array(void) : _nb(0), _elmts(NULL) {};
		
		Array(unsigned int n) : _nb(n), _elmts(new T[n]()) {};
		
		Array(Array const & src) : _nb(0), _elmts(NULL)
		{
			*this = src;
			return;
		};
	
		Array & operator=(Array const & src)
		{
			if (&src == this)
				return *this;
			if (size() > 0)
				delete [] this->_elmts;
			this->_elmts = new T[src.size()];
			for(unsigned int i = 0; i < src.size(); i++)
				this->_elmts[i] = src._elmts[i];
			this->_nb = src.size();
			return (*this);
		};

		~Array(void)
		{
			if (size() > 0)
				delete [] this->_elmts;
		};	

		unsigned int size(void) const { return this->_nb; } ;

		T & operator[](unsigned int index)
		{
			if (index >= this->size())
				throw Array::OutOfLimitsException();
			return this->_elmts[index];
		};
	
	private:
		unsigned int _nb;
		T*	_elmts;
};

template <typename T>
std::ostream &operator<<(std::ostream &out, Array<T> const &src)
{
	out << "{";
	for (unsigned int i = 0; i < src.size(); i++)
	{
		out << src[i];
		if (i < src.size() - 1)
			out << ", ";
	}
	out << "}";
	return out;
}

#endif
