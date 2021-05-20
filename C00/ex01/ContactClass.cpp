#include "ContactClass.hpp"

Contact::Contact(void): _first_name(""), _last_name(""), _nickname(""), _login(""), _address(""), _email_address(""), _phone_number(""), _birthday_date(""), _favorite_meal(""), _underwear_color(""), _darkest_secret("")
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::set_contact(void)
{
	std::cout << "Please enter contact first name: ";
	std::getline(std::cin, this->_first_name);
	if (std::cin.eof())
		return;
	std::cout << "Please enter contact last name: ";
	std::getline(std::cin, this->_last_name);
	if (std::cin.eof())
		return;
	std::cout << "Please enter contact nickname: ";
	std::getline(std::cin, this->_nickname);
	if (std::cin.eof())
		return;	
	std::cout << "Please enter contact login: ";
	std::getline(std::cin, this->_login);
	if (std::cin.eof())
		return;
	std::cout << "Please enter contact address: ";
	std::getline(std::cin, this->_address);
	if (std::cin.eof())
		return;
	std::cout << "Please enter contact email address: ";
	std::getline(std::cin, this->_email_address);
	if (std::cin.eof())
		return;
	std::cout << "Please enter contact phone number: ";
	std::getline(std::cin, this->_phone_number);
	if (std::cin.eof())
		return;
	std::cout << "Please enter contact birthday date: ";
	std::getline(std::cin, this->_birthday_date);
	if (std::cin.eof())
		return;
	std::cout << "Please enter contact favorite meal: ";
	std::getline(std::cin, this->_favorite_meal);
	if (std::cin.eof())
		return;
	std::cout << "Please enter contact darkest secret: ";
	std::getline(std::cin, this->_darkest_secret);
}

std::string Contact::truncate_string(std::string str, size_t size)
{
	if (str.length() > size)
		str = str.substr(0, size - 1) + ".";
	return (str);
}

void	Contact::list_contact(int nb) const
{
	std::cout << "|"
			<< std::setw(10) << nb << "|"
			<< std::setw(10) << truncate_string(get_first_name(), 10) << "|"
			<< std::setw(10) << truncate_string(get_last_name(), 10) << "|"
			<< std::setw(10) << truncate_string(get_login(), 10) << "|"
			<< std::endl;
}

void	Contact::print_contact(void) const
{
	std::cout << "First Name: " << this->_first_name << std::endl;
	std::cout << "Last Name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Login: " << this->_login << std::endl;
	std::cout << "Address: " << this->_address << std::endl;
	std::cout << "Email address: " << this->_email_address << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Birthday date: " << this->_birthday_date << std::endl;
	std::cout << "Favorite meal: " << this->_favorite_meal << std::endl;
	std::cout << "Underwear color: " << this->_underwear_color << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}

std::string Contact::get_first_name(void) const
{
	return this->_first_name;
}

std::string Contact::get_last_name(void) const
{
	return this->_last_name;
}

std::string Contact::get_login(void) const
{
	return this->_login;
}
