#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
}

SuperTrap::SuperTrap(std::string name)
{

}


SuperTrap::~SuperTrap()
{

}

SuperTrap::SuperTrap(const SuperTrap &other)
{
	std::cout << "Copy constructor." << std::endl;
	*this = other;
}

// SuperTrap & SuperTrap::operator =(const SuperTrap &other)
// {
// 	if (this != &other)
// 	{
// 		_hitPoints = other._hitPoints;
// 		_maxHitPoints = other._maxHitPoints;
// 		_energyPoints = other._energyPoints;
// 		_maxEnergyPoints = other._maxEnergyPoints;
// 		_level = other._level;
// 		_name = other._name;
// 		_meleeAttack = other._meleeAttack;
// 		_rangedAttack = other._rangedAttack;
// 		_armorReduction = other._armorReduction;
// 	}
// 	return *this;
// }