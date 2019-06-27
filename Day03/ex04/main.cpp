#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	NinjaTrap n1("Tolik");
	NinjaTrap n2("Vitya");

	std::cout << "=====================" << std::endl;
	n1.ninjaShoebox(n2);
	n1.ninjaShoebox(n1);
	std::cout << "=====================" << std::endl;

	ClapTrap clap1;
	n2.ninjaShoebox(clap1);

	std::cout << "=====================" << std::endl;
	
	FragTrap frag1("Frag1");
	
	n2.ninjaShoebox(frag1);
	std::cout << "=====================" << std::endl;

	ScavTrap scav1("Scav1");
	n1.ninjaShoebox(scav1);
	
	std::cout << "=====================" << std::endl;
	return 0;
}