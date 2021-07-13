#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string> //for getline
#include <iomanip> //for setw
#include <iostream> //for std

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void	set_contact(void) ;
		void	print_contact(void) const;
		void	list_contact(int nb) const;
		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		static std::string truncate_string(std::string, size_t size);

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif
