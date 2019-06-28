#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{

private:
	std::string _name;
	int _damagePoints;
	int _APCost;
	AWeapon(void);


public:
	AWeapon(AWeapon const &other);
	virtual ~AWeapon();

	AWeapon &operator =(AWeapon const &other);

	AWeapon(std::string const & name, int apcost, int damage);
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;

	virtual void attack() const = 0;

};

#endif