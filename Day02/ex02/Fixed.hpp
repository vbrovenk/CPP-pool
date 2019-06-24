#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

private:
	int _rawBits;

	static const int _fractBits;

public:
	Fixed(void);
	Fixed(Fixed const &other);
	Fixed(const int intVal);
	Fixed(const float fltVal);

	~Fixed();

	Fixed & operator =(const Fixed &rhs);

	bool operator >(const Fixed &other) const;
	bool operator <(const Fixed &other) const;
	bool operator >=(const Fixed &other) const;
	bool operator <=(const Fixed &other) const;
	bool operator ==(const Fixed &other) const;
	bool operator !=(const Fixed &other) const;

	Fixed operator +(const Fixed &other);
	Fixed operator -(const Fixed &other);
	Fixed operator *(const Fixed &other);
	Fixed operator /(const Fixed &other);	

	Fixed &operator ++();
	Fixed operator ++(int value);
	Fixed &operator --();
	Fixed operator --(int value);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat(void) const;
	int toInt(void) const;

	static Fixed &min(Fixed &left, Fixed &right);
	static const Fixed &min(const Fixed &left, const Fixed &right);
	static Fixed &max(Fixed &left, Fixed &right);
	static const Fixed &max(const Fixed &left, const Fixed &right);
	
};

std::ostream &operator<<(std::ostream &o, Fixed const & i);

#endif