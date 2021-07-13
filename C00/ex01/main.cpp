#include "Contact.hpp"
#include "Phonebook.hpp"

int	check_index(std::string input, int nb)
{
	if (input == "0")
	{
		if (nb > 0)
			return (0);
		std::cout << "This contact is empty.";
	}
	else if (input == "1")
	{
		if (nb > 1)
			return (1);
		std::cout << "This contact is empty.";
	}
	else if (input == "2")
	{
		if (nb > 2)
			return (2);
		std::cout << "This contact is empty.";
	}
	else if (input == "3")
	{
		if (nb > 3)
			return (3);
		std::cout << "This contact is empty.";
	}
	else if (input == "4")
	{
		if (nb > 4)
			return (4);
		std::cout << "This contact is empty.";
	}
	else if (input == "5")
	{
		if (nb > 5)
			return (5);
		std::cout << "This contact is empty.";
	}
	else if (input == "6")
	{
		if (nb > 6)
			return (6);
		std::cout << "This contact is empty.";
	}
	else if (input == "7")
	{
		if (nb > 7)
			return (7);
		std::cout << "This contact is empty.";
	}
	else
		std::cout << "\"" << input <<  "\" is not a valid entry.";
	std::cout << " Please select an index from 0 to " << nb - 1 << ": " ;
	return (-1);
}

void	search_contact(Contact phonebook[8], int nb)
{
	int 		i;
	int			check;
	std::string input = "";

	std::cout << "*********************************************" << std::endl;
	std::cout << "|"
				<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << "|"
				<< std::endl;
	i = 0;
	while (i < nb)
	{
		phonebook[i].list_contact(i);
		i++;
	}
	std::cout << "*********************************************" <<std::endl;
	std::cout << "Please select an index: ";
	check = -1;
	while (check < 0)
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
			return; 
		check = check_index(input, nb);
		input = "";
	}
	phonebook[check].print_contact();
}

void	add_contact(Contact *c)
{
	c->set_contact();
}

int main()
{
	Phonebook	my_phonebook;
	int			nb;
	std::string	input = "";

	nb = 0;
	while (input != "EXIT" && std::cin.eof() != 1)
	{
		std::cout << "phonebook> ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			if (nb + 1 >  8)
				std::cout << "Phonebook is full - already 8 contacts" << std::endl;
			else
			{	
				add_contact(&(my_phonebook.my_contacts[nb]));
				nb++;
			}
		}
		else if (input == "SEARCH")
		{
			if (nb == 0)
				std::cout << "Phonebook is empty" << std::endl;
			else
				search_contact(my_phonebook.my_contacts, nb);
		}
	}
	return (0);
}
