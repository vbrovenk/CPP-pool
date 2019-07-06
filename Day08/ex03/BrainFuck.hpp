#ifndef BRAINFUCK_HPP
#define BRAINFUCK_HPP

#include <iostream>
#include <stack>

class BrainFuck
{
private:
	int _pointer;
	stack<int> openBraces;

public:
	BrainFuck();
	BrainFuck(std::ifstream &ifs);

	BrainFuck(BrainFuck const &other);
	BrainFuck &operator =(BrainFuck const &other);

	~BrainFuck();
	
};

#endif