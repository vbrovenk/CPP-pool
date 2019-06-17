#include <iostream>
#include <fstream>


int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace filename \"s1\" \"s2\"" << std::endl;
	}

	std::ifstream ifs(argv[1]);
	if (ifs.is_open() == 0)
		std::cout << "Can't open file: " << argv[1] << std::endl;
	
	if (argv[2] == NULL || argv[3] == NULL)
		std::cout << "s1 and s2 can't be NULL" << std::endl;
}