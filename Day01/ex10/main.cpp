#include <iostream>
#include <fstream>
#include <sstream>

void read_input(void)
{
	std::string line;

	while (true)
	{
		std::getline(std::cin, line);
		if (std::cin.eof())
			return ;
		std::cout << line << std::endl;
	}
}

int main(int argc, char *argv[])
{
	std::string line;
	if (argc == 1)
		read_input();
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::ifstream ifs(argv[i]);
			std::string fileName = argv[i];
			if (fileName == "-")
				read_input();
			else if (ifs.is_open() == 0)
			{
				std::cout << "cato9tails: " << fileName << ": "
				<< std::strerror(errno) << std::endl;
				errno = 0;
			}
			else
			{
				std::stringstream ss;
				ss << ifs.rdbuf();
				if (errno != 0)
				{
					std::cout << "cato9tails: " << fileName << ": "
						<< std::strerror(errno) << std::endl;
					errno = 0;
				}
				std::cout << ss.str();
			}
			ifs.close();
		}
	}
	
	return 0;
}