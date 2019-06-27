#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	std::cout << "NinjaTrap Constructor called." << std::endl;
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_name = "NinjaTrap";
	_meleeAttack = 60;
	_rangedAttack = 5;
	_armorReduction = 0;
}

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << "NinjaTrap Constructor called." << std::endl;
	_name = name;
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeAttack = 60;
	_rangedAttack = 5;
	_armorReduction = 0;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap Destructor called." << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &other)
{
	std::cout << "NinjaTrap Copy constructor." << std::endl;
	*this = other;
}

NinjaTrap & NinjaTrap::operator =(const NinjaTrap &other)
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

void NinjaTrap::ninjaShoebox(NinjaTrap &ref)
{
	if (this != &ref)
	{
		std::cout << "NinjaTrap: " << _name << 
		" drinks beer with other NinjaTrap: " << ref._name
			<< std::endl;
	}
	else
	{
		std::cout << "DON'T DO IT!" << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(FragTrap &ref)
{
	std::cout << "NinjaTrap: " << _name << 
	" melee attacks FragTrap."
		<< std::endl;
	ref.takeDamage(_meleeAttack);
}

void NinjaTrap::ninjaShoebox(ScavTrap &ref)
{
	std::cout << "NinjaTrap: " << _name << 
	" ranged attacks ScavTrap."
		<< std::endl;
	ref.takeDamage(_rangedAttack);
}

void NinjaTrap::ninjaShoebox(ClapTrap &ref)
{
	std::cout << "NinjaTrap: " << _name << 
	" repair ClapTrap."
		<< std::endl;
	ref.beRepaired(25);
}
