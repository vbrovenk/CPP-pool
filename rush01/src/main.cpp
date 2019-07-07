#include <iostream>
#include "TextMode.hpp"
#include "GraphicalMode.hpp"
#include "Info.hpp"


int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " -t(text mode) | -g(graphical mode)" << std::endl;
		return 1;
	}
	std::string mode = argv[1];
	if (mode == "-t")
	{
		TextMode textmode;
		textmode.displayData();
	}
	else if (mode == "-g")
	{
		GraphicalMode graphmode;
		graphmode.displayData();
	}
	else
	{
		std::cout << "Wrong mode: " << argv[1] << std::endl;
	}
	
	return 0;
}