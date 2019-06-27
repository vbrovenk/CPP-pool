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
	
	void ninjaShoebox(NinjaTrap const &ref);
	void ninjaShoebox(FragTrap const &ref);
	void ninjaShoebox(ScavTrap const &ref);
	void ninjaShoebox(ClapTrap const &ref);


};

#endif