#include <iomanip>
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
		_index++;
	}
}

int		PhoneBook::getIndex(void) const
{
	return _index;
}

void	PhoneBook::_cutString(std::string needCut) const
{
	std::string truncated;

	if (needCut.length() > 10)
	{
		truncated = needCut.substr(0, 9);
		std::cout << truncated << ".";
	}
	else
		std::cout << std::setw(10) << needCut;
}

void	PhoneBook::showContacts(void) const
{
	if (_index == 0)
	{
		std::cout << "PhoneBook is empty." << std::endl;
		return ;
	}
	for (int i = 0; i < _index; i++)
	{
		std::cout << std::setw(10) << _contacts[i].getIndex() << "|";

		_cutString(_contacts[i].getFirstName());
		std::cout << "|";
		
		_cutString(_contacts[i].getLastName());
		std::cout << "|";

		_cutString(_contacts[i].getNickName());
		std::cout << std::endl;
	}
	fullContactInfo();
}

void	PhoneBook::fullContactInfo(void) const
{
	int choice;

	std::cout << "Choose INDEX of contact for more info: ";
	std::cin >> choice;
	if (std::cin.eof())
		exit(1);
	if (std::cin.fail() || std::cin.eof())
	{
		std::cout << "Wrong input!" << std::endl;
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		return ;
	}
	std::cin.ignore(32767, '\n');
	if (choice >= 0 && choice < 8 && choice < _index)
		_contacts[choice].printInfo();
	else
		std::cout << "Wrong index!" << std::endl;
}
