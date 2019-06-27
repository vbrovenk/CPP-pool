#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clap1;

	std::cout << "===========================" << std::endl;

	FragTrap frag1("Captain");
	frag1.takeDamage(30);
	frag1.beRepaired(10);
	frag1.rangedAttack("bear");
	frag1.meleeAttack("mouse");

	std::cout << "===========================" << std::endl;
	ScavTrap scav1("Scavchik");
	scav1.rangedAttack("bear");
	scav1.meleeAttack("mouse");
	scav1.takeDamage(20);
	scav1.beRepaired(10);
	

	return 0;
}
