#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	
}

Cure::Cure(Cure const &other)
{
	*this = other;
}

Cure &Cure::operator =(Cure const &other)
{
	if (this != &other)
	{

	}
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}

Cure::~Cure()
{
	
}
