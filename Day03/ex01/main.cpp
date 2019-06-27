#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap ft1("chopik");

	ft1.rangedAttack("dodik");
	ft1.meleeAttack("Kolya");

	ft1.takeDamage(104);
	ft1.beRepaired(10);

	FragTrap copy(ft1);


	for (int i = 0; i < 5; i++)
		ft1.vaulthunter_dot_exe("Bear");

	std::cout << "=======================" << std::endl;
	ScavTrap scav1("scavchik");

	scav1.meleeAttack("Topor");
	scav1.takeDamage(55);
	scav1.beRepaired(30);

	for (int i = 0; i < 5; i++)
		scav1.challengeNewcomer();

	return 0;
}