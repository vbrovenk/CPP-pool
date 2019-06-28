#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &other) : Enemy(170, "Super Mutant")
{
	*this = other;
}

SuperMutant &SuperMutant::operator =(SuperMutant const &other)
{
	Enemy::operator=(other);
	return *this;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}


// mozhno li vyzvat' base takeDamage()
void SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	Enemy::takeDamage(damage);
}
