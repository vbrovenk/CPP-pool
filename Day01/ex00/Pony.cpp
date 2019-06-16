#include "Pony.hpp"

Pony::Pony(std::string name, std::string color): _name(name), _color(color)
{
	std::cout << "Constructor for " << _name << std::endl;
}

Pony::~Pony()
{
	std::cout << "Destructor for Pony" << _name << std::endl;
}