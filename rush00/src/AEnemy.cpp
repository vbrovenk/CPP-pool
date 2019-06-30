#include "AEnemy.hpp"

AEnemy::AEnemy(void)
{
}

AEnemy::~AEnemy()
{
}

AEnemy::AEnemy(AEnemy const &other)
{
	*this = other;
}

AEnemy &AEnemy::operator =(AEnemy const &other)
{
	if (this != &other)
	{
		_x = other._x;
		_y = other._y;
	}

	return *this;
}