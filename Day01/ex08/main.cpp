#include "Human.hpp"

int main(void)
{

	std::string target1 = "wolf";
	std::string actionM = "meleeAttack";

	std::string target2 = "mouse";
	std::string actionR = "rangedAttack";

	std::string actionI = "intimidatingShout";

	Human h1;

	h1.action(actionM, target1);
	h1.action(actionR, target2);
	h1.action(actionI, target1);

	return 0;
}