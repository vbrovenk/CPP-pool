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

int		PhoneBook::getIndex(void)
{
	return _index;
}

void	PhoneBook::showContacts(void) const
{
	std::string truncFirstName;
	std::string truncLastName;
	std::string truncNickName;

	for (int i = 0; i < _index; i++)
	{
		std::cout << std::setw(10) << _contacts[i].getIndex() << "|";
		if (_contacts[i].getFirstName().length() > 10)
		{
			truncFirstName = _contacts[i].getFirstName().substr(0, 9);
			std::cout << truncFirstName << ".|";
		}
		else
			std::cout << std::setw(10) << _contacts[i].getFirstName() << "|";
		
		if (_contacts[i].getLastName().length() > 10)
		{
			truncLastName = _contacts[i].getLastName().substr(0, 9);
			std::cout << truncLastName << ".|";
		}
		else
			std::cout << std::setw(10) << _contacts[i].getLastName() << "|";
		
		if (_contacts[i].getNickName().length() > 10)
		{
			truncNickName = _contacts[i].getNickName().substr(0, 9);
			std::cout << truncNickName << ".";
		}
		else
			std::cout << std::setw(10) << _contacts[i].getNickName();
		std::cout << std::endl;
	}
	fullContactInfo();
}

void	PhoneBook::fullContactInfo(void) const
{
	std::string choice;

	std::cout << "Choose INDEX of contact for more info: ";
	std::cin >> choice;
	for (size_t j = 0; j < choice.length(); j++)
	{
		if (!std::isdigit(choice[j]))
		{
			std::cout << "Wrong index!" << std::endl;
			return ;
		}
	}
	int need_index = std::stoi(choice);
	if (need_index >= 0 && need_index < 8 && need_index < _index)
		_contacts[need_index].printInfo();
	else
		std::cout << "Wrong index!" << std::endl;
}