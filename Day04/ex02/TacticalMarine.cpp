#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &other)
{
	*this = other;
}

TacticalMarine & TacticalMarine::operator =(TacticalMarine const &other)
{
	if (this != &other)
	{

	}
	return *this;
}


ISpaceMarine* TacticalMarine::clone() const
{
	ISpaceMarine* newTactical = new TacticalMarine(*this);
	return newTactical;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}
