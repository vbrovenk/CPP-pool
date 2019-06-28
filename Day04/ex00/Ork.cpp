#include "Ork.hpp"

Ork::Ork(void)
{
	std::cout << "Default Ork CTOR" << std::endl;
}

Ork::Ork(std::string name) : Victim(name)
{
	std::cout << "ORK ORK." << std::endl;
}

Ork::~Ork(void)
{
	std::cout << "Whaaaa..." << std::endl;
}

void Ork::getPolymorphed() const
{
	std::cout << _name << " has been turned into a black frog !" << std::endl;
}

Ork::Ork(Ork const &other)
{
	std::cout << "Copy constructor Ork" << std::endl;
	*this = other;
}

Ork & Ork::operator =(Ork const &other)
{
	if (this != &other)
	{
		_name = other._name;
	}
	return *this;
}

