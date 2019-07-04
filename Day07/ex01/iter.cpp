#include <iostream>

class Awesome {

public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }

private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) 
{ 
	std::cout << x << std::endl; return;
}

template <typename T>
void printElement(T &element)
{
	std::cout << element << ", ";
}


template <typename T>
void iter(T *array, size_t length, void (*funcPtr)(T const &element))
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


	double *doubleArray = new double[8];
	
	for (int i = 0; i < 8; i++)
		doubleArray[i] = rand();
	iter(doubleArray, 8, printElement);
	std::cout << std::endl;

	std::cout << "==========================" << std::endl;

	int tab[5] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0;
}