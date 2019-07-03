#include "Caster.hpp"
#include <sstream>

Caster::Caster(void)
{

}

Caster::~Caster()
{
}

Caster::Caster(std::string value) : _value(value)
{

}

Caster::Caster(Caster const &other)
{
	*this = other;
}

Caster &Caster::operator =(Caster const &other)
{
	if (this != &other)
	{
		_value = other._value;
	}
	return *this;
}

Caster::operator char() const
{

	int inter;
	char nbr = '\0';
	if ((inter = std::stoi(_value)))
	{
		nbr = static_cast<char> (inter);
		return nbr;
	}

	return nbr;
}

Caster::operator int() const
{
	int nbr;
	if ((nbr = std::stoi(_value)))
	{
		return nbr;
	}
	return nbr;
}

Caster::operator float() const
{
	std::stringstream ss;
	ss << _value;
	float nbr;

	if (ss >> nbr)
	{
		std::cout << "float: " << nbr << std::endl;
	}
	
	return nbr;
}
