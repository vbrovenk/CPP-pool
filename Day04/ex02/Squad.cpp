#include "Squad.hpp"

Squad::Squad(void)
{
	_count = 0;
}

int	Squad::getCount(void) const
{
	return _count;
}

Squad::Squad(Squad const &other)
{
	*this = other;
}

Squad &Squad::operator =(Squad const &other)
{
	if (this != &other)
	{
		_count = other._count;
		// for (int i = 0; i < _count; i++)
		// 	delete _soldiers[i];
		// delete _soldiers;

		_soldiers = new ISpaceMarine *[_count];
		for (int i = 0; i < _count; i++)
			this->push(other.getUnit(i));
	}
	return *this;
}

Squad::~Squad(void)
{
	for (int i = 0; i < _count; i++)
		delete _soldiers[i];
	delete _soldiers;
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (n < 0 || n > _count)
		return (NULL);
	return _soldiers[n];
}

int	Squad::push(ISpaceMarine* soldier)
{
	if (soldier == NULL)
		return _count;
	for (int i = 0; i < _count; i++)
	{

		// if (_soldiers[i] == soldier)
		// {
		// 	std::cout << "Soldier already in Squad." << std::endl;
		// 	return _count;
		// }
	}


	ISpaceMarine **solds;


	if (_count == 0)
	{		
		solds = new ISpaceMarine * [1];
		solds[0] = soldier;
		_count++;

	}
	else
	{
		_count++;
		int i = 0;
		solds = new ISpaceMarine * [_count];
		for (; i < (_count - 1); i++)
			solds[i] = _soldiers[i];
		std::cout << "SEG" << std::endl;
		solds[i] = soldier;
		delete _soldiers;
		_soldiers = solds;
	}
	return _count;
}

