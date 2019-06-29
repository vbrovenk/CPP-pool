#include "AMateria.hpp"

AMateria::AMateria(void)
{
	
}

AMateria::AMateria(std::string const & type)
{
	xp_ = 0;
	_type = type;
}

void AMateria::use(ICharacter& target)
{
	xp_ += 10;
	target.getName();
}

AMateria::AMateria(AMateria const &other)
{
	*this = other;
}

AMateria &AMateria::operator =(AMateria const &other)
{
	if (this != &other)
	{
		xp_ = other.xp_;
		_type = other._type;
	}
	return *this;
}

unsigned int AMateria::getXP() const
{
	return xp_;
}

std::string const & AMateria::getType() const
{
	return _type;
}

AMateria::~AMateria()
{

}
