#include "BrainFuck.hpp"

BrainFuck::BrainFuck(void)
{
	_pointer = 0;
}

BrainFuck::~BrainFuck(void)
{

}

BrainFuck::BrainFuck(BrainFuck const &other)
{
	*this = other;
}

BrainFuck::BrainFuck(std::ifstream &ifs)
{
	
}

BrainFuck &BrainFuck::operator =(BrainFuck const &other)
{
	if (this != &other)
	{
		_pointer = other._pointer;
	}

	return *this;
}
