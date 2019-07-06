#include "span.hpp"
#include <iostream>

int main(void)
{
	Span sp = Span(5);

	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

	}
	catch (std::exception &ex)
	{
		std::cout << "Span is full." << std::endl;
	}

	try
	{
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << sp.longestSpan() << std::endl;

	}
	catch (std::exception &ex)
	{
		std::cout << "Size of Span < 2" << std::endl;
	}
		
	std::cout << "==========================" << std::endl;
	Span sp2 = Span(10000);
	try
	{

		sp2.addRange(0, 10000);
	}
	catch (std::exception &ex)
	{
		std::cout << "Not enough size." << std::endl;
	}

		try
	{
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;

	}
	catch (std::exception &ex)
	{
		std::cout << "Size of Span < 2" << std::endl;
	}
}