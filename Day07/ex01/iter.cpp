#include <iostream>

template <typename T>
void printElement(T &element)
{
	std::cout << element << ", ";
}


template <typename T>
void iter(T *array, size_t length, void (*funcPtr)(T &element))
{
	for (size_t i = 0; i < length; i++)
	{
		(*funcPtr)(array[i]);
	}
}

int main(void)
{
	srand(time(NULL));

	int array[5] = {1, 2, 3, 4, 5};

	iter(array, 5, printElement);
	std::cout << std::endl;


	double *doubleArray = new double[3];
	
	for (int i = 0; i < 8; i++)
		doubleArray[i] = rand();
	iter(doubleArray, 8, printElement);
	std::cout << std::endl;


	return 0;
}