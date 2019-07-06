#include <iostream>
#include "BrainFuck.hpp"
#include <fstream>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " file" << std::endl;
		return 1;
	}
	std::ifstream infile(argv[1]);
	if (infile.is_open() == 0)
	{
		std::cout << "Problems with file." << std::endl;
		return 1;
	}

	BrainFuck brain(infile);



	infile.close();
	return 0;
}