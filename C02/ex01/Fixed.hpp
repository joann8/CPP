#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed(void);
		
		Fixed & operator=(Fixed const & src);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

	private:
		int	_nb;
		static int const _bits;

};

std::ostream & operator<<(std::ostream & output, Fixed const & rhs);

#endif
