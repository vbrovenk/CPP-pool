#include "Character.hpp"

Character::Character(void)
{

}

Character::~Character()
{

}

Character::Character(std::string name)
{
	_name = name;

	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
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
		for (int i = 0; i < 4; i++)
		{
			if (other._inventory[i] != NULL)
				_inventory[i] = other._inventory[i]->clone();
		}
	}
	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}


void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
		std::cout << "FULL inventory" << std::endl;
}

void Character::unequip(int idx)
{
	for (int i = 0; i < 4; i++)
	{
		if (i == idx)
		{
			_inventory[i] = NULL;
			return ;
		}
	}
	std::cout << "Can't unequip this AMateria" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	for (int i = 0; i < 4; i++)
	{
		if (i == idx && _inventory[i] != NULL)
		{
			_inventory[i]->use(target);
			return ;
		}
	}
	std::cout << "Can't use this AMateria" << std::endl;
}
