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
		throw std::exception();
	}

	_vec.push_back(newNbr);
}

void Span::addRange(int low, int upper)
{
	if (static_cast<unsigned int>(upper - low) > _N)
		throw std::exception();
	for (int i = low; i < upper; i++)
	{
			_vec.push_back(i);
	}
}

int Span::shortestSpan() const
{
	if (_vec.size() <= 1)
		throw std::exception();
	int min_dist = INT_MAX;
	
	std::vector<int>::const_iterator left = _vec.begin();
	std::vector<int>::const_iterator right;

	while (left != _vec.end())
	{
		right = left + 1;
		while (right != _vec.end())
		{
			if (abs(*left - *right) < min_dist)
				min_dist = abs(*left - *right);
			right++;
		}
		left++;
	}

	return min_dist;
}


int Span::longestSpan() const
{
	if (_vec.size() <= 1)
		throw std::exception();

	int max = *std::max_element(_vec.begin(), _vec.end());
	int min = *std::min_element(_vec.begin(), _vec.end());

	return max - min;
}

