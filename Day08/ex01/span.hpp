#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>

class Span
{

private:
	unsigned int _N;
	std::vector<int> _vec;
	Span(void);

public:
	Span(unsigned int n);
	~Span(void);
	Span(Span const &other);
	Span &operator =(Span const &other);

	void addNumber(int newNbr);
	void addRange(int low, int upper);
	int shortestSpan() const;
	int longestSpan() const;

};

#endif