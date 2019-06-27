#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Constructor called." << std::endl;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = "ScavTrap";
	_meleeAttack = 20;
	_rangedAttack = 15;
	_armorReduction = 3;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Constructor called." << std::endl;
	_name = name;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttack = 20;
	_rangedAttack = 15;
	_armorReduction = 3;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy constructor." << std::endl;
	*this = other;
}

ScavTrap & ScavTrap::operator =(const ScavTrap &other)
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

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called." << std::endl;
}


void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "ScavTrap " << _name << " attacks " <<
	target << " at range, causing " << _rangedAttack <<
	" points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "ScavTrap " << _name << " attacks " <<
	target << " at melee, causing " << _meleeAttack <<
	" points of damage !" << std::endl;
}

void ScavTrap::iceBucket(void)
{
	std::cout << "SC4V-TP " << _name 
	<< ": ICE Bucket Challenge." << std::endl;
}

void ScavTrap::chubby(void)
{
	std::cout << "SC4V-TP " << _name 
	<< ": Chunny Bunny Challenge." << std::endl;
}

void ScavTrap::lemon(void)
{
	std::cout << "SC4V-TP " << _name 
	<< ": Lemon Challenge." << std::endl;
}

void ScavTrap::notLaugh(void)
{
	std::cout << "SC4V-TP " << _name 
	<< ": Try Not to Laugh Challenge." << std::endl;
}

void ScavTrap::jellyBean(void)
{
	std::cout << "SC4V-TP " << _name 
	<< ": BeanBoozled Jelly Beans Challenge." << std::endl;
}

void ScavTrap::challengeNewcomer(void)
{
	void (ScavTrap::*ptrFuncs[])(void) = {
		&ScavTrap::iceBucket,
		&ScavTrap::chubby,
		&ScavTrap::lemon,
		&ScavTrap::notLaugh,
		&ScavTrap::jellyBean
	};

	srand (clock());
	(this->*ptrFuncs[std::rand() % 5])();
}