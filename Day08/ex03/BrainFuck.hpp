#ifndef BRAINFUCK_HPP
#define BRAINFUCK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <array>
#include <algorithm>

class BrainFuck
{
private:
	int _pointer;
	std::stack<char> _openBraces;
	std::vector<char> _code;

	std::array<int, 30000> cpu;

public:
	BrainFuck();
	BrainFuck(std::ifstream &ifs);

	BrainFuck(BrainFuck const &other);
	BrainFuck &operator =(BrainFuck const &other);

	bool validInstruction(char instruc);

	void run(void);


	~BrainFuck();
	
};

#endif