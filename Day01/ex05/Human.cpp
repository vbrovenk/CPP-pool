#include "Human.hpp"

Human::Human(void)
{
	std::cout << "Creating of Human" << std::endl;
}

Human::~Human()
{
	std::cout << "Deleting of Human" << std::endl;
}

std::string Human::identify(void) const
{
	// std::cout << "Human::identify" << _localBrain.identify() << std::endl;
	return _localBrain.identify();
}

const Brain &Human::getBrain(void)
{
	return _localBrain;
}