#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Ork.hpp"

int main(void)
{
	Sorcerer *sr1 = new Sorcerer("Potter", "Fast");

	std::cout << *sr1;

	Victim *v1 = new Victim("Victim1");
	std::cout << *v1;

	Peon *peon1 = new Peon("Peondra");

	Victim *ork1 = new Ork("Ork2");

	std::cout << "===========================" << std::endl;
	
	sr1->polymorph(*v1);
	sr1->polymorph(*peon1);

	sr1->polymorph(*ork1);

	std::cout << "===========================" << std::endl;



	delete sr1;
	delete v1;
	delete peon1;
	delete ork1;


	// Sorcerer robert("Robert", "the Magnificent");
	// Victim jim("Jimmy");
	// Peon joe("Joe");
	// std::cout << robert << jim << joe;
	// robert.polymorph(jim);
	// robert.polymorph(joe);
	return 0;
}