#include <iostream>
#include <cstring>
#include <fstream>


int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace filename \"s1\" \"s2\"" << std::endl;
		exit(1);
	}

	std::ifstream ifs(argv[1]);
	if (ifs.is_open() == 0)
		std::cout << "Can't open file: " << argv[1] << std::endl;
	
	if (strlen(argv[2]) == 0 || strlen(argv[3]) == 0)
	{
		std::cout << "s1 and s2 can't have 0 length" << std::endl;
		ifs.close();
		exit(1);
	}

	std::string newName = argv[1];
	newName.append(".replace");

	std::ofstream ofs(newName);

	std::string line;

	while (getline(ifs, line))
	{
		std::cout << line << std::endl;
		size_t index = 0;	
		while (true)
		{
			index = line.find(argv[2], index);
			if (index == std::string::npos)
				break;
			line.replace(index, strlen(argv[2]), argv[3]);

			index += strlen(argv[2]);

			std::cout << "Modyfied: " << line << std::endl;
			ofs << line << "\n";
		}
	}

	ifs.close();
	ofs.close();

	return 0;
}