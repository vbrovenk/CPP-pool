#include "Fixed.hpp"

const int Fixed::_fractBits = 8;

Fixed::Fixed(void) : _rawBits(0)
{
	// std::cout << "Default Constructor with _rawBits: " 
	// 			<< _rawBits << std::endl; 
}

Fixed::Fixed(const int intVal)
{
	// std::cout << "Int Constructor called" << std::endl;
	_rawBits = (intVal << _fractBits);
}

Fixed::Fixed(const float fltVal)
{
	// std::cout << "Float Constructor called" << std::endl;

	this->_rawBits = roundf(fltVal * (1 << _fractBits));
}	

Fixed::~Fixed()
{
	// std::cout << "Destructor with _rawBits: " 
	// 			<< _rawBits << std::endl; 
}

Fixed::Fixed(Fixed const &other)
{
	// std::cout << "Copy Constructor with _rawBits: "
	// 			<< _rawBits << std::endl;

	*this = other;
}

Fixed & Fixed::operator =(Fixed const &rhs)
{
	// std::cout << "Assignment operator called with _rawBits: " 
	// 			<< _rawBits << std::endl;
	if (this != &rhs)
			this->_rawBits = rhs.getRawBits();
	
	return *this;
}

bool Fixed::operator >(const Fixed &other) const
{
	return (_rawBits > other.getRawBits()) ? true : false;
}

bool Fixed::operator <(const Fixed &other) const
{
	return (_rawBits < other.getRawBits()) ? true : false;
}

bool Fixed::operator >=(const Fixed &other) const
{
	return (_rawBits >= other.getRawBits()) ? true : false;
}

bool Fixed::operator <=(const Fixed &other) const
{
	return (_rawBits <= other.getRawBits()) ? true : false;
}

bool Fixed::operator ==(const Fixed &other) const
{
	return (_rawBits == other.getRawBits()) ? true : false;
}

bool Fixed::operator !=(const Fixed &other) const
{
	return (_rawBits != other.getRawBits()) ? true : false;
}

Fixed Fixed::operator +(const Fixed &other)
{
	Fixed temp;
	temp._rawBits = _rawBits + other.getRawBits();
	return temp;
}

Fixed Fixed::operator -(const Fixed &other)
{
	Fixed temp;
	temp._rawBits = _rawBits - other.getRawBits();
	return temp;
}

// toFloat() * toFloat()
Fixed Fixed::operator *(const Fixed &other)
{
	Fixed temp;
	temp._rawBits = (_rawBits * other.getRawBits()) >> _fractBits;
	return temp;
}

Fixed Fixed::operator /(const Fixed &other)
{
	Fixed temp;
	temp._rawBits = ((long)_rawBits << _fractBits) / other.getRawBits();
	return temp;
}

Fixed & Fixed::operator ++()
{
	_rawBits++;
	return *this;
}

Fixed Fixed::operator ++(int value)
{
	value = 0;

	Fixed temp(*this);
	_rawBits++;

	return temp;
}

Fixed & Fixed::operator --()
{
	_rawBits--;
	return *this;
}

Fixed Fixed::operator --(int value)
{
	value = 0;

	Fixed temp(*this);
	_rawBits--;

	return temp;
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

Fixed &Fixed::min(Fixed &left, Fixed &right)
{
	// std::cout << "Regular min()" << std::endl;

	return (left < right ? left : right);
}

Fixed const &Fixed::min(Fixed const &left, Fixed const &right)
{
	// std::cout << "Const min()" << std::endl;

	return (left < right ? left : right);
}

Fixed &Fixed::max(Fixed &left, Fixed &right)
{
	// std::cout << "Regular max()" << std::endl;

	return (left > right ? left : right);
}

Fixed const &Fixed::max(Fixed const &left, Fixed const &right)
{
	// std::cout << "Const max()" << std::endl;

	return (left > right ? left : right);
}