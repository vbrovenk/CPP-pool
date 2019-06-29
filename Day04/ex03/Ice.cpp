#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	
}

Ice::Ice(Ice const &other)
{
	*this = other;
}

Ice &Ice::operator =(Ice const &other)
{
	if (this != &other)
	{

	}
	return *this;
}

Ice::~Ice()
{

}

AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
