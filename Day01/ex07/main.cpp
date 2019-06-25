#include <iostream>
#include <cstring>
#include <fstream>
#include <cerrno>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace filename \"s1\" \"s2\"" << std::endl;
		exit(1);
	}

	std::ifstream ifs(argv[1]);
	if (ifs.is_open() == 0)
	{
		std::cout << "Can't open file: " << argv[1] << std::endl;
		exit(1);
	}
	
	if (strlen(argv[2]) == 0 || strlen(argv[3]) == 0)
	{
		std::cout << "s1 and s2 can't have 0 length" << std::endl;
		ifs.close();
		exit(1);
	}

	std::string newName = argv[1];
	newName.append(".replace");

	std::ofstream ofs(newName);
	if (ofs.is_open() == 0)
	{
		std::cout << "Can't open file: " << newName << std::endl;
		ofs.close();
		ifs.close();
		exit (1);
	}
	std::string line;

	while (getline(ifs, line))
	{
		size_t index = 0;
		while (true)
		{
			index = line.find(argv[2], index);
			if (index == std::string::npos)
				break ;
			line.replace(index, strlen(argv[2]), argv[3]);
			index += strlen(argv[3]);
		}
		ofs << line << "\n";
	}

	if (errno != 0)
		std::cout << argv[1] << ": " << strerror(errno) << std::endl;
	ifs.close();
	ofs.close();

	return 0;
}