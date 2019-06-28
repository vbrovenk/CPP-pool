#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
	// std::cout << "PlasmaRifle Default CTOR" << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &other) : AWeapon("Plasma Rifle", 21, 5)
{
	*this = other;
}

PlasmaRifle &PlasmaRifle::operator =(PlasmaRifle const &other)
{
	if (this != &other)
	{
		AWeapon::operator=(other);
	}
	return *this;
}

PlasmaRifle::~PlasmaRifle()
{
	// std::cout << "PlasmaRifle Default DTOR" << std::endl;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}