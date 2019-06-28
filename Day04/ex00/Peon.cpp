#include "Peon.hpp"

Peon::Peon(void)
{
	std::cout << "Default Peon CTOR" << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << _name << " has been turned into a pink pony !" << std::endl;
}

Peon::Peon(Peon const &other)
{
	std::cout << "Copy constructor Peon" << std::endl;
	*this = other;
}

Peon & Peon::operator =(Peon const &other)
{
	if (this != &other)
	{
		_name = other._name;
	}
	return *this;
}

