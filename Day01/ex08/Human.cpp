#include "Human.hpp"

void Human::meleeAttack(std::string const &target)
{
	std::cout << "meleeAttack with target: " << target << std::endl;
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << "rangedAttack with target: " << target << std::endl;
}

void Human::intimidatingShout(std::string const &target)
{
	std::cout << "intimidatingShout with target: " << target << std::endl;
}


void Human::action(std::string const & action_name, std::string const &target)
{
	void (Human::*ptrFunction[3])(std::string const &target);

	ptrFunction[0] = &Human::meleeAttack;
	ptrFunction[1] = &Human::rangedAttack;
	ptrFunction[2] = &Human::intimidatingShout;
	
	std::string funcNames[] = {
		"meleeAttack",
		"rangedAttack",
		"intimidatingShout"
	};

	for (int i = 0; i < 3; i++)
	{
		if (action_name == funcNames[i])
		{
			(this->*ptrFunction[i])(target);
			break ;
		}
	}
}
