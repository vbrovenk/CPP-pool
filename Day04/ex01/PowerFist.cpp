#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
	// std::cout << "PowerFist Default CTOR" << std::endl;
}

PowerFist::PowerFist(PowerFist const &other) : AWeapon("Power Fist", 50, 8)
{
	*this = other;
}

PowerFist &PowerFist::operator =(PowerFist const &other)
{
	if (this != &other)
	{
		AWeapon::operator=(other);
	}
	return *this;
}

PowerFist::~PowerFist()
{
	// std::cout << "PowerFist Default DTOR" << std::endl;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}