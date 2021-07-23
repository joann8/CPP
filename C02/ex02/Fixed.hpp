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
		bool operator>(Fixed const& rhs) const;
		bool operator<(Fixed const& rhs) const;
		bool operator>=(Fixed const& rhs) const;
		bool operator<=(Fixed const& rhs) const;
		bool operator==(Fixed const& rhs) const;
		bool operator!=(Fixed const& rhs) const;

		Fixed operator+(Fixed const& rhs) const;
		Fixed operator-(Fixed const& rhs) const;
		Fixed operator*(Fixed const& rhs) const;
		Fixed operator/(Fixed const& rhs) const;

		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);

	static Fixed& min(Fixed& f1, Fixed& f2);
	static Fixed const& min(Fixed const& f1, Fixed const& f2);
	static Fixed& max(Fixed& f1, Fixed& f2);
	static Fixed const& max(Fixed const& f1, Fixed const& f2);
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
