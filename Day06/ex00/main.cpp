#include <iostream>
#include "Caster.hpp"
#include <iomanip>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " string" << std::endl;
		return 0;
	}

	Caster caster(argv[1]);

	try
	{
		char c = static_cast<char> (caster);
		if (c >= 32 && c <= 127)
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char:  Non displayable" << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << "char: impossible" << std::endl;
	}

	try
	{
		int i = static_cast<int> (caster);
		std::cout << "int: " << i << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << "int: impossible" << std::endl;
	}

	try
	{
		float f = static_cast<float> (caster);
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << "float: impossible" << std::endl;

	}

	try
	{
		double d = static_cast<double> (caster);
		std::cout << "double: " <<  d << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << "double: impossible" << std::endl;

	}

	return 0;
}