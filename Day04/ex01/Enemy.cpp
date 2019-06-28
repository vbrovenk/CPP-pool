#include "Enemy.hpp"

Enemy::Enemy(void)
{
	// std::cout << "Enemy Default CTOR" << std::endl;
}

Enemy::Enemy(int hp, std::string const & type)
{
	// std::cout << "Enemy User CTOR" << std::endl;
	_hitPoints = hp;
	_type = type;
}

Enemy::Enemy(Enemy const &other)
{
	*this = other;
}

Enemy &Enemy::operator =(Enemy const &other)
{
	if (this != &other)
	{
		_hitPoints = other._hitPoints;
		_type = other._type;
	}
	return *this;
}

Enemy::~Enemy()
{
	// std::cout << "Enemy Default DTOR" << std::endl;
}

std::string Enemy::getType() const
{
	return _type;
}

int Enemy::getHP() const
{
	return _hitPoints;
}

void Enemy::takeDamage(int damage)
{
	if (_hitPoints == 0 || damage < 0)
		return ;
	else if (_hitPoints - damage >= 0)
		_hitPoints -= damage;
	else
		_hitPoints = 0;
}
