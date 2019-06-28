#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{

private:
	std::string _name;
	int _AP;
	AWeapon *_currentWeapon;
	
	Character(void);	

public:
	Character(Character const &other);
	~Character();

	Character &operator =(Character const &other);

	
	Character(std::string const & name);
	void recoverAP();
	void equip(AWeapon *newWeapon);
	void attack(Enemy *enemy);
	std::string getName() const;
	int getAP() const;
	AWeapon *getCurrentWeapon() const;
};

std::ostream &operator<<(std::ostream &o, Character const &i);

#endif