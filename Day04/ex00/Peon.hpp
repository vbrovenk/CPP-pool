#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{

private:
	Peon(void);

public:
	Peon(std::string name);
	Peon(Peon const &other);
	virtual ~Peon(void);

	Peon & operator =(Peon const &other);

	void getPolymorphed() const;

};

#endif