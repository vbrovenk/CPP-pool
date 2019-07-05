#include <iostream>
#include "Array.hpp"

void check()
{
	std::cout << "============= DOUBLE =============" << std::endl;
	Array<float> ar(10);
	Array<float> arr2(15);

	std::cout << "============= BEFORE =============" << std::endl;

	for (unsigned int i = 0; i < ar.size(); i++)
	{
		ar[i] = i;
		std::cout << ar[i] << std::endl;
	}
	std::cout << "=========================" << std::endl;

	for (unsigned int i = 0; i < arr2.size(); i++)
	{
		arr2[i] = i;
		std::cout << arr2[i] << std::endl;
	}

	ar = arr2;
	std::cout << "============= AFTER =============" << std::endl;

	for (unsigned int i = 0; i < ar.size(); i++)
	{
		std::cout << ar[i] << std::endl;
	}
	std::cout << "=========================" << std::endl;

	for (unsigned int i = 0; i < arr2.size(); i++)
	{
		std::cout << arr2[i] << std::endl;
	}

}

void check2()
{
	std::cout << "============= STRING =============" << std::endl;
	Array<std::string> ar(10);
	Array<std::string > arr2(15);

	std::cout << "============= BEFORE =============" << std::endl;

	for (unsigned int i = 0; i < ar.size(); i++)
	{
		ar[i] = "hello";
		std::cout << ar[i] << std::endl;
	}
	std::cout << "=========================" << std::endl;

	for (unsigned int i = 0; i < arr2.size(); i++)
	{
		arr2[i] = "world";
		std::cout << arr2[i] << std::endl;
	}

	ar = arr2;
	std::cout << "============= AFTER =============" << std::endl;

	for (unsigned int i = 0; i < ar.size(); i++)
	{
		std::cout << ar[i] << std::endl;
	}
	std::cout << "=========================" << std::endl;

	for (unsigned int i = 0; i < arr2.size(); i++)
	{
		std::cout << arr2[i] << std::endl;
	}

}


int main(void)
{
	Array<int> ar(5);
	Array<int> arr2(6);

	std::cout << "==================================" << std::endl;
	for (unsigned int i = 0; i < ar.size(); i++)
		std::cout << ar[i] << std::endl;

	arr2 = ar;
	std::cout << "==================================" << std::endl;
	for (unsigned int i = 0; i < ar.size(); i++)
		std::cout << ar[i] << std::endl;

	std::cout << "============= TRY CATCH =============" << std::endl;
	try
	{
		std::cout << arr2[-1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Out of range" << std::endl;
	}
	check();
	check2();

	return 0;
}
