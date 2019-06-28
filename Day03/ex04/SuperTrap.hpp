#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
private:

public:
	SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &other);
	~SuperTrap();

	SuperTrap & operator =(SuperTrap const &other);

	void meleeAttack(std::string const & target);
	void rangedAttack(std::string const & target);

};


#endif