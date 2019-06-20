#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{

private:
	int _rawBits;

	static const int _fractBits;

public:
	Fixed(void);
	Fixed(Fixed const &obj);
	~Fixed();

	Fixed & operator=(Fixed const &rhs);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif