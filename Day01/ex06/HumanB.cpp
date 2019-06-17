#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{

}

void HumanB::setWeapon(Weapon &wpn)
{
	_weapon = &wpn;
}

void HumanB::attack(void) const
{
	std::cout << _name << " attacks with his ";
	std::cout << _weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destructor HumanB" << std::endl;
}