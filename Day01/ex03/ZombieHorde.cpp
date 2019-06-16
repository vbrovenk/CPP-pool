#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	if (N < 0)
	{
		std::cout << "Wrong number" << std::endl;
		exit(1);
	}
	_count = N;
	_zombies = new Zombie[N];

	const int size = 4;
	const char *names[size] = {"Vasek", "Tolik", "Alyosha", "Petya"};

	for (int i = 0; i < _count; i++)
	{
		_zombies[i].setName(names[std::rand() % size]);
	}
}

void ZombieHorde::announce(void) const
{
	for (int i = 0; i < _count; i++)
	{
		_zombies[i].announce();
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Destructor deletes all zombies:" << std::endl;
	delete [] _zombies;
}
