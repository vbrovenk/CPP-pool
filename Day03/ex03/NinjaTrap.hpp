#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &other);
	~NinjaTrap();

	NinjaTrap &operator =(NinjaTrap const &other);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	
	void ninjaShoebox(NinjaTrap &ref);
	void ninjaShoebox(FragTrap &ref);
	void ninjaShoebox(ScavTrap &ref);
	void ninjaShoebox(ClapTrap &ref);


};

#endif