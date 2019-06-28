#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	std::cout << "Default Sorcerer CTOR" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title <<  ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title 
	<< ", is dead. Consequences will never be the same !" << std::endl;
}

std::string Sorcerer::getName(void) const
{
	return _name;
}

std::string Sorcerer::getTitle(void) const
{
	return _title;
}

Sorcerer::Sorcerer(Sorcerer const &other)
{
	std::cout << "Copy constructor Sorcerer" << std::endl;
	*this = other;
}

Sorcerer & Sorcerer::operator =(Sorcerer const &other)
{
	if (this != &other)
	{
		_name = other._name;
		_title = other._title;
	}
	return *this;
}

void Sorcerer::polymorph(Victim const &vict) const
{
	vict.getPolymorphed();
}

std::ostream &operator<<(std::ostream &o, Sorcerer const &i)
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies !" << std::endl;

	return o;
}