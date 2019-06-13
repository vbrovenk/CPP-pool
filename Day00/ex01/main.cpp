#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	std::string command;
	PhoneBook phonebook;

	while (1)
	{
		std::cout << "Input one command: ADD | SEARCH | EXIT: ";
		std::cin >> command;

		if (std::cin.eof())
			exit(1);
		if (command.compare("EXIT") == 0)
			break ;
		else if (command.compare("ADD") == 0)
		{
			if (phonebook.getIndex() >= 8)
				std::cout << "PhoneBook is full" << std::endl;
			else
				phonebook.addNewContact();
		}
		else if (command.compare("SEARCH") == 0)
			phonebook.showContacts();
	}
	return 0;
}
