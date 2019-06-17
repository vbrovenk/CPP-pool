#include "Weapon.hpp"

Weapon::Weapon(void)
{
	_type = "default type";
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

std::string &Weapon::getType(void)
{
	// const std::string &ref = _type;
	return _type;
}

void Weapon::setType(std::string newType)
{
	_type = newType;
}

Weapon::~Weapon()
{
	std::cout << "Destructor Weapon" << std::endl;
}