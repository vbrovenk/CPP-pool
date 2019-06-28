#ifndef Ork_HPP
# define Ork_HPP

# include <iostream>
# include "Victim.hpp"

class Ork : public Victim
{

private:
	Ork(void);

public:
	Ork(std::string name);
	Ork(Ork const &other);
	virtual ~Ork(void);

	Ork & operator =(Ork const &other);

	void getPolymorphed() const;

};

#endif