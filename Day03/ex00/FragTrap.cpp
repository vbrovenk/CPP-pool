#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Constructor called." << std::endl;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = "FragTrap";
	_meleeAttack = 30;
	_rangedAttack = 20;
	_armorReduction = 5;
}

FragTrap::FragTrap(std::string name) : _name(name)
{
	std::cout << "Constructor called." << std::endl;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttack = 30;
	_rangedAttack = 20;
	_armorReduction = 5;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "Copy constructor." << std::endl;
	*this = other;
}

FragTrap & FragTrap::operator =(const FragTrap &other)
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

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " attacks " <<
	target << " at range, causing " << _rangedAttack <<
	" points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " attacks " <<
	target << " at melee, causing " << _meleeAttack <<
	" points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
		std::cout << "HP is 0." << std::endl;
	else if ((long)_hitPoints - (long)amount >= 0)
	{
		_hitPoints -= amount;
		std::cout << "FR4G-TP " << _name << " took damege: -" <<
		amount << " hit points. | " << "HP: " << _hitPoints
		 << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << _name << " took damege: -" <<
		_hitPoints << " hit points. | ";
		_hitPoints = 0;
		std::cout << "HP: " << _hitPoints << std::endl;
	}


}

void FragTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == _maxHitPoints)
		std::cout << "HP is full." << std::endl;
	else if (_hitPoints + amount <= _maxHitPoints)
	{
		_hitPoints += amount;
		std::cout << "FR4G-TP " << _name << " repared: +" <<
		amount << " hit points. | " << "HP: " << _hitPoints
		 << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << _name << " repared: +" <<
		_maxHitPoints - _hitPoints << " hit points. | ";
		_hitPoints = 100;
		std::cout << "HP: " << _hitPoints << std::endl;
	}

}


FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called." << std::endl;
}