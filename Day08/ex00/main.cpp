#include <vector>
#include <array>
#include <list>
#include "easyfind.hpp"


int main(void)
{

	try
	{
		int arr[] = { 1, 2, 3, 4 };

		// std::vector<int> v1 = {1, 2, 3, 4};
		std::vector<int> v1(arr, arr + sizeof(arr) / sizeof(arr[0]));


		easyfind(v1, 3);
	}
	catch (std::exception &ex)
	{
		std::cout << "Can't find element in Vector" << std::endl;
	}

	try
	{
		std::array<int, 6> a1 = {{66, 4, 3, 22, 63, 23}};


		easyfind(a1, 0);
	}
	catch (std::exception &ex)
	{
		std::cout << "Can't find element in Array" << std::endl;
	}

	try
	{
		int arr[] = { 9, 8, 6, 5, 3, 2 };

		std::list<int> lst1(arr, arr + sizeof(arr) / sizeof(arr[0]));

		easyfind(lst1, 3);
	}
	catch (std::exception &ex)
	{
		std::cout << "Can't find element in List" << std::endl;
	}

	return 0;
}