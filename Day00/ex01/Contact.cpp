#include "Contact.hpp"

Contact::Contact(void)
{

}

Contact::Contact(int index)
{
	this->_index = index;
	std::cout << "Input first name: ";
	std::cin >> _firstName;


}

int		Contact::getIndex(void) const
{
	return _index;
}

std::string	Contact::getFirstName(void) const
{
	return _firstName;
}

void	Contact::printInfo(void) const
{
	std::cout << "First name: " << _firstName << std::endl;
}