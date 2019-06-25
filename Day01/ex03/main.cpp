#include "ZombieHorde.hpp"

int main(void)
{
	int N = 10;

	ZombieHorde test(N);
	test.announce();

	std::cout << "------- test2 ------------" << std::endl;
	ZombieHorde *test2 = new ZombieHorde(5);
	
	test2->announce();
	delete test2;

	std::cout << "------- test3 ------------" << std::endl;
	ZombieHorde *test3 = new ZombieHorde(-1);
	test3->announce();

	// system("leaks zombie");
	return 0; 
}
