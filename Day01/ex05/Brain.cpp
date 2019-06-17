#include "Brain.hpp"
#include <sstream>

Brain::Brain(void)
{
	_iqLevel = 118;
	std::cout << "Creating of Brain" << std::endl;
}

std::string Brain::identify(void) const
{	
	std::stringstream temp;
	temp << this;
	std::string address = temp.str();
	// std::cout << "Brain address: " << address << std::endl;
	return address;
}

Brain::~Brain()
{
	std::cout << "Destructor Brain" << std::endl;
}