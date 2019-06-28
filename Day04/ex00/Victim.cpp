#include "Victim.hpp"

Victim::Victim(void)
{
	std::cout << "Default Victim CTOR" << std::endl;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

Victim::Victim(Victim const &other)
{
	std::cout << "Copy constructor Victim" << std::endl;
	*this = other;
}

Victim & Victim::operator =(Victim const &other)
{
	if (this != &other)
	{
		_name = other._name;
	}
	return *this;
}

void Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

std::string Victim::getName(void) const
{
	return _name;
}

std::ostream &operator<<(std::ostream &o, Victim const & i)
{
	o << "I'm " << i.getName() << " and I like otters !" << std::endl;
	return o;
}
