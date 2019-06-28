#include "Character.hpp"


Character::Character(void)
{
	// std::cout << "Character Default CTOR" << std::endl;
}

Character::Character(std::string const & name)
{
	// std::cout << "Character User CTOR" << std::endl;
	_name = name;
	_AP = 40;
	_currentWeapon = NULL;
}


Character::Character(Character const &other)
{
	*this = other;
}

Character &Character::operator =(Character const &other)
{
	if (this != &other)
	{
		_name = other._name;
		_AP = other._AP;
		// _currentWeapon = new AWeapon(other);
	}
	return *this;
}

Character::~Character()
{
	// std::cout << "Character DTOR" << std::endl;

}

std::string Character::getName() const
{
	return _name;
}

int Character::getAP() const
{
	return _AP;
}

void Character::recoverAP()
{
	if (_AP + 10 <= 40)
		_AP += 10;
	else
		_AP = 40;
}

void Character::equip(AWeapon *newWeapon)
{
	_currentWeapon = newWeapon;
}

AWeapon * Character::getCurrentWeapon() const
{
	if (_currentWeapon != NULL)
		return _currentWeapon;
	else
		return NULL;
}

void Character::attack(Enemy *enemy)
{
	if (_currentWeapon != NULL && enemy != NULL)
	{
		if (_AP - _currentWeapon->getAPCost() < 0)
		{
			std::cout << "Not enough ACTION POINTS." << std::endl;
			return ;
		}
		std::cout << _name << " attacks " << enemy->getType() <<
		" with a " << _currentWeapon->getName() << std::endl;
	
		_currentWeapon->attack();
		_AP -= _currentWeapon->getAPCost();
		enemy->takeDamage(_currentWeapon->getDamage());
		if (enemy->getHP() == 0)
		{
			delete enemy;
			// enemy->~Enemy();
		}
	}
}


std::ostream &operator<<(std::ostream &o, Character const &i)
{
	if (i.getCurrentWeapon() != NULL)
	{
		o << i.getName() << " has " << i.getAP() << " AP " <<
		"and wields a " << i.getCurrentWeapon()->getName()
			<< std::endl;
	}
	else
	{
		o << i.getName() << " has " << i.getAP() << " AP " <<
			"and is unarmed" << std::endl;
	}
	
	return o;
}