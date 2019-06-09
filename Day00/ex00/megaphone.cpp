#include <iostream>

int main(int argc, char const *argv[])
{
	int index;
	int i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			index = 0;
			while (argv[i][index])
			{
				if (argv[i][index] >= 'a' && argv[i][index] <= 'z')
					std::cout << (char)(argv[i][index] - 32);
				else
					std::cout << argv[i][index];
				index++;
			}

			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}