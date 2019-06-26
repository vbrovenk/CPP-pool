#include "Fixed.hpp"

void erase_spaces(std::string & expr)
{
	size_t index = 0;
	while (true)
	{
		index = expr.find(" ", index);
		if (index == std::string::npos)
			break ;
		expr.replace(index, 1, "");
	}
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " expression" << std::endl;
		exit(1);
	}

	std::string expression = argv[1];
	erase_spaces(expression);
	std::cout << "Expr: " << expression << std::endl;

	for (size_t i = 0; i < expression.length(); i++)
	{
		
	}
	return 0;
}