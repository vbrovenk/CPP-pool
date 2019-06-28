#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	~FragTrap(void);

	FragTrap & operator =(const FragTrap &other);
	
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

	void vaulthunter_dot_exe(std::string const & target);
	void knock_knock(std::string const & target);
	void blightbot(std::string const & target);
	void mechromagician(std::string const & target);
	void miniontrap(std::string const & target);
	void sh_trap(std::string const & target);
};

#endif