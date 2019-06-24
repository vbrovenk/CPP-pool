#include "FragTrap.hpp"

int main(void)
{
	FragTrap ft1("chopik");

	ft1.rangedAttack("dodik");
	ft1.meleeAttack("Kolya");

	ft1.takeDamage(104);
	ft1.beRepaired(10);

	FragTrap copy(ft1);
	return 0;
}