#include "FragTrap.hpp"

int main(void)
{
	FragTrap ft1("chopik");

	ft1.rangedAttack("dodik");
	ft1.meleeAttack("Kolya");

	ft1.takeDamage(35);
	ft1.beRepaired(35);

	FragTrap copy(ft1);

	for (int i = 0; i < 5; i++)
		ft1.vaulthunter_dot_exe("Bear");

	return 0;
}
