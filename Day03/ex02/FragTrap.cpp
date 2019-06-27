#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Constructor called." << std::endl;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = "ClapTrap";
	_meleeAttack = 30;
	_rangedAttack = 20;
	_armorReduction = 5;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Constructor called." << std::endl;
	_name = name;
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

void FragTrap::knock_knock(std::string const & target)
{
	std::cout << "FR4G-TP " << _name <<
	" - Claptrap: \"Knock-knock.\" attacks " << target
		<< ": -25 energy."
		<< std::endl;
}

void FragTrap::blightbot(std::string const & target)
{
	std::cout << "FR4G-TP " << _name <<
	" - Blightbot: \"Just point me in the right direction!\"  attacks " << target
		<< ": -25 energy."
		<< std::endl;
}

void FragTrap::mechromagician(std::string const & target)
{
	std::cout << "FR4G-TP " << _name <<
	" - Punkbot: \"Look at me! I'm dancing! I'm dancing!\" attacks " << target
		<< ": -25 energy."
		<< std::endl;
}

void FragTrap::miniontrap(std::string const & target)
{
	std::cout << "FR4G-TP " << _name <<
	" - Miniontrap: \"So uh...great weather we're having.\" attacks " << target
		<< ": -25 energy."
		<< std::endl;
}

void FragTrap::sh_trap(std::string const & target)
{
	std::cout << "FR4G-TP " << _name <<
	" - Holobot: \"Ooh yeah, watch me! Watch me go!\" attacks " << target
		<< ": -25 energy."
		<< std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (_energyPoints - 25 < 0)
	{
		std::cout << "Not enough energy." << std::endl;
		return ;
	}
	_energyPoints -= 25;
	void (FragTrap::*ptrFuncs[])(std::string const & target) = {
		&FragTrap::knock_knock,
		&FragTrap::blightbot,
		&FragTrap::mechromagician,
		&FragTrap::miniontrap,
		&FragTrap::sh_trap
	};

	srand (clock());
	(this->*ptrFuncs[std::rand() % 5])(target);
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called." << std::endl;
}
