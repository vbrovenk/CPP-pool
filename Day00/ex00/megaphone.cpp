#include <iostream>

int main(int argc, char const *argv[])
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			for (int index = 0; argv[i][index]; index++)
				std::cout << (char)toupper(argv[i][index]);
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}