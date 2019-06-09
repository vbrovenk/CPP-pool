#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_index = 0;
}

void	PhoneBook::addNewContact(void)
{
	if (_index >= 0 && _index < 8)
	{
		Contact newContact(_index);
		_contacts[_index] = newContact;
	}
	_index++;
}

int		PhoneBook::getIndex(void)
{
	return _index;
}

void	PhoneBook::showContacts(void) const
{
	std::string choice;
	int need_index;

	for (int i = 0; i < _index; i++)
	{
		std::cout << _contacts[i].getIndex() << " | ";
		std::cout << _contacts[i].getFirstName() << " | ";
		std::cout << std::endl;
	}

	// std::cout << "Choose INDEX of contact for more info: ";
	// std::cin >> choice;
	// std::cout << choice;
	// for (int j = 0; j < choice.length(); j++)
	// {
	// 	if (!isdigit(choice[j]))
	// 	{
	// 		std::cout << "You write not a number." << std::endl;
	// 		return ;
	// 	}
	// }
	// need_index = atoi(choice);
}