#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	~ScavTrap();

	ScavTrap & operator =(const ScavTrap &other);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

	void challengeNewcomer(void);
	void iceBucket(void);
	void chubby(void);
	void lemon(void);
	void notLaugh(void);
	void jellyBean(void);


};

#endif