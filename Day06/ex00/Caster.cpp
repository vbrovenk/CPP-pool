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
	std::stringstream ss;

	int inter;
	char nbr = '\0';

	if (ss << _value && ss >> inter)
	{
		if (nbr < 0 || nbr > 127)
			return 0;
		nbr = static_cast<char> (inter);
		return nbr;
	}
	else
		throw std::exception();

	return nbr;
}

Caster::operator int() const
{
	std::stringstream ss;

	int nbr;
	if (ss << _value && ss >> nbr)
	{
		return nbr;
	}
	else
		throw std::exception();

	return nbr;
}

Caster::operator float() const
{
	float nbr = 0;

	if ((nbr = std::stof(_value)))
	{
		return nbr;
	}
	
	return nbr;
}

Caster::operator double() const
{
	double nbr = 0;

	if ((nbr = std::stod(_value)))
	{
		return nbr;
	}
	
	return nbr;
}
