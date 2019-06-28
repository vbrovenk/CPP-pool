#include "AWeapon.hpp"

AWeapon::~AWeapon()
{
	// std::cout << "AWeapon Default DTOR" << std::endl;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	// std::cout << "AWeapon User CTOR" << std::endl;
	_name = name;
	_APCost = apcost;
	_damagePoints = damage;
}

AWeapon::AWeapon(AWeapon const &other)
{
	*this = other;
}

AWeapon &AWeapon::operator =(AWeapon const &other)
{
	if (this != &other)
	{
		_name = other._name;
		_damagePoints = other._damagePoints;
		_APCost = other._APCost;
	}
	return *this;
}

std::string	AWeapon::getName(void) const
{
	return _name;
}

int	AWeapon::getAPCost(void) const
{
	return _APCost;
}

int	AWeapon::getDamage(void) const
{
	return _damagePoints;
}
