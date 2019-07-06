#include <vector>
#include <array>
#include <list>
#include "easyfind.hpp"


int main(void)
{

	try
	{
		std::vector<int> v1 = {1, 2, 3, 4};

		easyfind(v1, 4);
	}
	catch (std::exception &ex)
	{
		std::cout << "Can't find element in Vector" << std::endl;
	}

	try
	{
		std::array<int, 6> a1 = {66, 4, 3, 22, 63, 23};

		easyfind(a1, 24);
	}
	catch (std::exception &ex)
	{
		std::cout << "Can't find element in Array" << std::endl;
	}

	try
	{
		std::list<int> lst1 = {9, 8, 6, 5, 3, 2};

		easyfind(lst1, 3);
	}
	catch (std::exception &ex)
	{
		std::cout << "Can't find element in List" << std::endl;
	}

	return 0;
}