#include "Fixed.hpp"

const int Fixed::_fractBits = 8;

Fixed::Fixed(void) : _rawBits(0)
{
	std::cout << "Default Constructor with _rawBits: " 
				<< _rawBits << std::endl; 
}

Fixed::Fixed(const int intVal)
{
	std::cout << "Int Constructor called" << std::endl;
	_rawBits = (intVal << _fractBits);
}

Fixed::Fixed(const float fltVal)
{
	std::cout << "Float Constructor called" << std::endl;

	this->_rawBits = roundf(fltVal * (1 << _fractBits));
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
	return _rawBits;
}

void Fixed::setRawBits( int const raw )
{
	_rawBits = raw;
}

float Fixed::toFloat(void) const
{
	return (_rawBits / (float)(1 << _fractBits));
}

int Fixed::toInt(void) const
{
	return _rawBits >> _fractBits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();

	return o;
}
