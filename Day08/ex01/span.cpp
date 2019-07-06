#include "span.hpp"
#include <iostream>

Span::Span(void)
{
	_N = 0;
}

Span::Span(unsigned int n)
{
	_N = n;
}

Span::Span(Span const &other)
{
	*this = other;
}

Span &Span::operator =(Span const &other)
{
	if (this != &other)
	{
		_N = other._N;
		_vec = other._vec;
	}
	return *this;
}

Span::~Span(void)
{

}

void Span::addNumber(int newNbr)
{
	if (_vec.size() == _N)
	{
		std::cout << "Span is full." << std::endl;
		return ;
	}
	std::vector<int>::const_iterator alreadyExist;

	alreadyExist = find(_vec.begin(), _vec.end(), newNbr);
	if (alreadyExist == _vec.end())
		_vec.push_back(newNbr);
	else
		throw std::exception();
}

void Span::addRange(int low, int upper)
{
	if (static_cast<unsigned int>(upper - low) > _N)
		throw std::exception();
	for (int i = low; i < upper; i++)
	{
		std::vector<int>::const_iterator alreadyExist;
		alreadyExist = find(_vec.begin(), _vec.end(), i);
		
		if (alreadyExist == _vec.end())
			_vec.push_back(i);
	}
}

int Span::shortestSpan() const
{
	if (_vec.size() <= 1)
		throw std::exception();

	return *std::min_element(_vec.begin(), _vec.end());
}
int Span::longestSpan() const
{
	if (_vec.size() <= 1)
		throw std::exception();
	
	return *std::max_element(_vec.begin(), _vec.end());
}

