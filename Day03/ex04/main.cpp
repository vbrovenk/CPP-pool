#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	NinjaTrap nt("Alyoshka");
	SuperTrap st1("Durka");

	st1.rangedAttack("bereza");
	st1.meleeAttack("jimmy");

	st1.vaulthunter_dot_exe("mysh");
	st1.ninjaShoebox(nt);
	return 0;
}