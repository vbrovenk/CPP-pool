#include "Contact.hpp"

Contact::Contact(void)
{

}

Contact::Contact(int index)
{
	this->_index = index;
	std::cout << "Input first name: ";
	std::cin >> _firstName;
	std::cout << "Input last name: ";
	std::cin >> _lastName;
	std::cout << "Input nickname: ";
	std::cin >> _nickName;
	std::cout << "Input login: ";
	std::cin >> _login;
	std::cout << "Input postal address: ";
	std::cin >> _postalAddress;
	std::cout << "Input email address: ";
	std::cin >> _emailAddress;
	std::cout << "Input phone number: ";
	std::cin >> _phoneNumber;
	std::cout << "Input birthday date: ";
	std::cin >> _birthdayDate;
	std::cout << "Input favorite meal: ";
	std::cin >> _favoriteMeal;
	std::cout << "Input underwear color: ";
	std::cin >> _underwearColor;
	std::cout << "Input darkest secret: ";
	std::cin >> _darkestSecret;
}

int		Contact::getIndex(void) const
{
	return _index;
}

std::string	Contact::getFirstName(void) const
{
	return _firstName;
}

std::string	Contact::getLastName(void) const
{
	return _lastName;
}

std::string	Contact::getNickName(void) const
{
	return _nickName;
}

void	Contact::printInfo(void) const
{
	std::cout << "First name\t\t: " << _firstName << std::endl;
	std::cout << "Last name\t\t: " << _lastName << std::endl;
	std::cout << "Nick name\t\t: " << _nickName << std::endl;
	std::cout << "Login\t\t\t: " << _login << std::endl;
	std::cout << "Postal address\t\t: " << _postalAddress << std::endl;
	std::cout << "Email address\t\t: " << _emailAddress << std::endl;
	std::cout << "Phone number\t\t: " << _phoneNumber << std::endl;
	std::cout << "Birthday date\t\t: " << _birthdayDate << std::endl;
	std::cout << "Favorite meal\t\t: " << _favoriteMeal << std::endl;
	std::cout << "Underwear color\t\t: " << _underwearColor << std::endl;
	std::cout << "Darkest secret\t\t: " << _darkestSecret << std::endl;
}
