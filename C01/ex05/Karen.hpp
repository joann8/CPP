#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>
#include <map>

class Karen;

typedef void(Karen::*f_ptr)();


class Karen
{
	public:
		Karen(void);
		~Karen();
		void complain(std::string level);

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif
