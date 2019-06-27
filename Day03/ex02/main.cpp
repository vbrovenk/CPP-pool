#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap frag1("Captain");

	frag1.takeDamage(30);
	frag1.beRepaired(10);

	return 0;
}