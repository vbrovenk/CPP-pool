#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	_zombieType = "defaultZombieType";
}

void ZombieEvent::setZombieType(std::string type)
{
	_zombieType = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *zomb = new Zombie(name);
	zomb->setType(_zombieType);
	return zomb;
}

void ZombieEvent::randomChump(void)
{
	const int size = 4;
	const char *names[size] = {"Vasek", "Tolik", "Alyosha", "Petya"};

	srand (time(NULL));

	Zombie zomb(names[std::rand() % size]);
	zomb.setType(_zombieType);
	zomb.announce();
}
