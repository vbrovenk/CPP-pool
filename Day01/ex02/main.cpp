#include "ZombieEvent.hpp"

int main(void)
{
	Zombie zomb1;
	zomb1.setType("Pyzhik");
	zomb1.announce();

	Zombie zomb2("Luntik");
	zomb2.announce();

	ZombieEvent event;

	event.setZombieType("ERZHAN");
	event.randomChump();

	event.setZombieType("MIAMI");

	Zombie *test = event.newZombie("Oleg");
	test->announce();
	delete test;

	// system("leaks zombie");
	return 0;
}