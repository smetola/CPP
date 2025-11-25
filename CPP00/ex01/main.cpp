#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)	{
	PhoneBook	phonebook;
	std::string	cmd;

	while(1)
	{
		std::cout << "Introduce a command:\n \
		ADD: save a new contact\n \
		SEARCH: display a specific contact\n \
		EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
			break;
		else if (cmd == "ADD")
		{
			phonebook.add();
		}
		else if (cmd == "SEARCH")
		{
			phonebook.search();
		}
		else
			std::cout << "Wrong command.\n";
	}
}