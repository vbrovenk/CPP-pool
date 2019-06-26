#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;


	std::cout << "========= Tests =========" << std::endl;
	
	Fixed x(4.85f);
	Fixed y(13.13f);

	std::cout << x << " > " << y << " = " << std::boolalpha << (x > y) << std::endl;
	std::cout << x << " < " << y << " = " << std::boolalpha << (x < y) << std::endl;
	std::cout << x << " <= " << y << " = " << std::boolalpha << (x <= y) << std::endl;

	std::cout << x << " != " << y << " = " << std::boolalpha << (x != y) << std::endl;

	std::cout << x << " + " << y << " = " << (x + y) << std::endl;
	std::cout << x << " - " << y << " = " << (x - y) << std::endl;
	std::cout << x << " / " << y << " = " << (x / y) << std::endl;
	std::cout << x << " * " << y << " = " << (x * y) << std::endl;

	Fixed z(1);
	++z;
	std::cout << "++z = " << z << std::endl;
	--z;
	std::cout << "--z = " << z << std::endl;

	std::cout << "=========================" << std::endl;

	std::cout << "min( " << x << ", " << y << " ) = " << Fixed::min( x, y ) << std::endl;
	std::cout << "max( " << x << ", " << y << " ) = " << Fixed::max( x, y ) << std::endl;



	return 0;
}