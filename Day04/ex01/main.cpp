#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

#include "Character.hpp"


// check on leaks
int main(void)
{
	AWeapon *pr = new PlasmaRifle;
	AWeapon *pf = new PowerFist;

	pr->attack();
	pf->attack();


	std::cout << "=================" << std::endl;
	Enemy *enem = new Enemy(100, "Warrior");
	enem->takeDamage(30);
	std::cout << enem->getHP() << std::endl;

	std::cout << "======= SUPER MUTANT ==========" << std::endl;
	Enemy *sm = new SuperMutant;

	sm->takeDamage(168);
	std::cout << sm->getHP() << std::endl;

	std::cout << "======= RAD SCORPION ==========" << std::endl;
	RadScorpion *rs = new RadScorpion;
	std::cout << rs->getHP() << std::endl;


	std::cout << "======= CHARACTER ==========" << std::endl;
	Character *charac1 = new Character("Jakub");
	charac1->recoverAP();
	std::cout << *charac1;
	charac1->equip(pr);
	charac1->attack(sm);
	std::cout << sm->getHP() << std::endl;
	charac1->recoverAP();
	charac1->recoverAP();
	charac1->attack(sm);
	std::cout << sm->getHP() << std::endl;
	charac1->recoverAP();
	charac1->recoverAP();
	charac1->attack(sm);
	std::cout << sm->getHP() << std::endl;

	std::cout << *charac1;




	std::cout << "============================" << std::endl;

	delete pr;
	delete pf;



	// Character* zaz = new Character("zaz");
	// std::cout << *zaz;
	// Enemy* b = new RadScorpion();
	// AWeapon* pr = new PlasmaRifle();
	// AWeapon* pf = new PowerFist();
	// zaz->equip(pr);
	// std::cout << *zaz;
	// zaz->equip(pf);
	// zaz->attack(b);
	// std::cout << *zaz;
	// zaz->equip(pr);
	// std::cout << *zaz;
	// zaz->attack(b);
	// std::cout << *zaz;
	// zaz->attack(b);
	// std::cout << *zaz;

	return 0;
}