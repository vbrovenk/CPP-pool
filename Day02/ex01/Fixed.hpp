#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

class Fixed
{

private:
	int _rawBits;

	static const int _fractBits;

public:
	Fixed(void);
	Fixed(Fixed const &obj);
	Fixed(const int intVal);
	Fixed(const float fltVal);

	~Fixed();

	Fixed & operator=(Fixed const &rhs);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const & i);

#endif