#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap CTOR called." << std::endl;
	_hitPoints = 0;
	_maxHitPoints = 0;
	_energyPoints = 0;
	_maxEnergyPoints = 0;
	_level = 0;
	_name = "CLAPTRAP";
	_meleeAttack = 0;
	_rangedAttack = 0;
	_armorReduction = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap DTOR called." << std::endl;	
}


ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor." << std::endl;
	*this = other;
}

ClapTrap & ClapTrap::operator =(const ClapTrap &other)
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

void ClapTrap::takeDamage(unsigned int amount)
{
	long interAmount = (long)amount - _armorReduction;
	if (interAmount < 0)
		interAmount = 0;
	std::cout << "interAmount = " << interAmount << std::endl;
	if (_hitPoints == 0)
		std::cout << "HP is 0." << std::endl;
	else if ((long)_hitPoints - interAmount >= 0)
	{
		_hitPoints -= interAmount;
		std::cout << "ClapTrap " << _name << " took damege: -" <<
		interAmount << " hit points. | " << "HP: " << _hitPoints
		 << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " took damege: -" <<
		_hitPoints << " hit points. | ";
		_hitPoints = 0;
		std::cout << "HP: " << _hitPoints << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == _maxHitPoints)
		std::cout << "HP is full." << std::endl;
	else if ((long)_hitPoints + amount <= (long)_maxHitPoints)
	{
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " repared: +" <<
		amount << " hit points. | " << "HP: " << _hitPoints
		 << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " repared: +" <<
		_maxHitPoints - _hitPoints << " hit points. | ";
		_hitPoints = 100;
		std::cout << "HP: " << _hitPoints << std::endl;
	}
}
