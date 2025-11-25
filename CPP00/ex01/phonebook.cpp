#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : n_contacts(0), index(0)	{
}

std::string	check_line(std::string str)	{
	std::string	line;

	std::cout << str;
	while (getline(std::cin, line) && line.empty())
		std::cout << "Field cannot be empty\n" << str;
	return (line);
}

void	PhoneBook::add()    {
	std::string f_name, l_name, n_name, phone, secret;

	f_name = check_line("Enter first name: ");
	l_name = check_line("Enter last name: ");
	n_name = check_line("Enter nickname: ");
	phone = check_line("Enter phone number: ");
	secret = check_line("Enter the darkest secret: ");
	Contact new_contact(f_name, l_name, n_name, phone, secret);
	contacts[index] = new_contact;
	index = (index + 1) % 8;
	if (n_contacts < 8)
		n_contacts++;
}

std::string	format(std::string str) {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void    PhoneBook::search() {
	if (n_contacts == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;
	}
	int		i = 0;
	while (i < n_contacts)
	{
		std::cout << std::right << std::setw(10) << i + 1 << " | ";
		std::cout << std::right << std::setw(10) << format(contacts[i].get_f_name()) << " | ";
		std::cout << std::right << std::setw(10) << format(contacts[i].get_l_name()) << " | ";
		std::cout << std::right << std::setw(10) << format(contacts[i].get_n_name()) << " | " << std::endl;
		i++;
	}
	std::cout << "Enter a contact index" << std::endl;
	i = 0;
	while (true)
	{
		std::cin >> i;
		if (std::cin.fail() || i < 1 || i > 8 || i > n_contacts)
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cout << "Wrong index, pick an existing one" << std::endl;
		}
		else
			break;
	}
	std::cin.ignore();
	i--;
	std::cout << "First name:     " << contacts[i].get_f_name() << std::endl;
	std::cout << "Last name:      " << contacts[i].get_l_name() << std::endl;
	std::cout << "Nickname:       " << contacts[i].get_n_name() << std::endl;
	std::cout << "Phone number:   " << contacts[i].get_phone() << std::endl;
	std::cout << "Darkest secret: " << contacts[i].get_secret() << std::endl;
}