#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

protected:
	int _hitPoints;
	int _maxHitPoints;
	int _energyPoints;
	int _maxEnergyPoints;
	int _level;
	std::string _name;
	int _meleeAttack;
	int _rangedAttack;
	int _armorReduction;

public:
	ClapTrap(void);
	ClapTrap(ClapTrap const &other);
	~ClapTrap();
	
	ClapTrap & operator =(ClapTrap const &other);

	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif