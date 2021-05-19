#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void		set_contact(void) ;
		void		print_contact(void) const;
		void		list_contact(int nb) const;
		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_login(void) const;
		std::string	get_address(void) const;
		std::string	get_email_address(void) const;
		std::string	get_phone_number(void) const;
		std::string	get_birthday_date(void) const;
		std::string	get_favorite_meal(void) const;
		std::string	get_underwear_color(void) const;
		std::string	get_darkest_secret(void) const;
		static int	get_nb_contact(void);

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_login;
		std::string	_address;
		std::string	_email_address;
		std::string	_phone_number;
		std::string	_birthday_date;
		std::string	_favorite_meal;
		std::string	_underwear_color;
		std::string	_darkest_secret;
};

#endif
