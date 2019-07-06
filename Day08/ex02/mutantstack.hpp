#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

public:
	MutantStack (void) {};
	MutantStack (MutantStack const &other) 
	{
		*this = other;
	};
	MutantStack &operator =(MutantStack const &other) 
	{
		if (this != &other)
		{
			std::stack<T>::c = other.c;
		}
		return *this;
	};

	~MutantStack (void) {};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() 
	{
		return std::stack<T>::c.begin();
	}

	iterator end() 
	{
		return std::stack<T>::c.end();
	}

};

#endif