#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent event;

	event.setZombieType("ERZHAN");
	event.randomChump();

	event.setZombieType("PETUX");

	Zombie *test = event.newZombie("Oleg");

	test->announce();

	delete test;
	// system("leaks zombie");
	return 0;
}