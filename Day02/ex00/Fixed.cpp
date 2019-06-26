#include "Fixed.hpp"

const int Fixed::_fractBits = 8;

Fixed::Fixed(void) : _rawBits(0)
{
	std::cout << "Default Constructor with _rawBits: " 
				<< _rawBits << std::endl; 
}

Fixed::~Fixed()
{
	std::cout << "Destructor with _rawBits: " 
				<< _rawBits << std::endl; 
}

Fixed::Fixed(Fixed const &obj)
{
	std::cout << "Copy Constructor with _rawBits: "
				<< _rawBits << std::endl;

	*this = obj;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignment operator called with _rawBits: "
				<< _rawBits << std::endl;
	if (this != &rhs)
			this->_rawBits = rhs.getRawBits();
	
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	
	return _rawBits;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;

	_rawBits = raw;
}
