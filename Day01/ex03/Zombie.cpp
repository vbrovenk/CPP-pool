#include "Zombie.hpp"

Zombie::Zombie(void)
{
	_type = "defaultType";
	_name = "defaultName";
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Constructor Zombie: " << _name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Desstructor Zombie: " << _name << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setType(std::string type)
{
	_type = type;
}

void Zombie::setName(std::string name)
{
	_name = name;
}
