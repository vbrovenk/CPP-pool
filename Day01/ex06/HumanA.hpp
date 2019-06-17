#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{

private:
	std::string _name;
	Weapon *_weapon;

public:
	HumanA(void);
	HumanA(std::string name, Weapon wpn);
	~HumanA();
	
	void attack(void) const;
};

#endif