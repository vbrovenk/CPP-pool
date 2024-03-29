#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wpn) : _name(name), _weapon(wpn)
{
	std::cout << "Constructor HumanA" << std::endl;
}

void HumanA::attack(void) const
{
	std::cout << _name << " attacks with his ";
	std::cout << _weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructor HumanA" << std::endl;
}