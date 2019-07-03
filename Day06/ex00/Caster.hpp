#ifndef CASTER_HPP
# define CASTER_HPP

#include <iostream>

class Caster
{

private:
	std::string _value;

public:
	Caster(void);
	Caster(std::string value);
	~Caster();
	Caster(Caster const &other);
	Caster &operator =(Caster const &other);

	operator char() const;
	operator int() const;
	operator float() const;
	operator double() const;


};



#endif