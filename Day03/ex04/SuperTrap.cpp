#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	std::cout << "Default SuperTrap CTOR." << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
	std::cout << "User SuperTrap CTOR." << std::endl;
	_name = name;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeAttack = 60;
	_rangedAttack = 20;
	_armorReduction = 5;
}


SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap DTOR." << std::endl;

}

SuperTrap::SuperTrap(const SuperTrap &other)
{
	std::cout << "Copy constructor." << std::endl;
	*this = other;
}

SuperTrap & SuperTrap::operator =(const SuperTrap &other)
{
	if (this != &other)
	{
		_hitPoints = other._hitPoints;
		_maxHitPoints = other._maxHitPoints;
		_energyPoints = other._energyPoints;
		_maxEnergyPoints = other._maxEnergyPoints;
		_level = other._level;
		_name = other._name;
		_meleeAttack = other._meleeAttack;
		_rangedAttack = other._rangedAttack;
		_armorReduction = other._armorReduction;
	}
	return *this;
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}
