#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>

# include "Victim.hpp"

class Sorcerer
{
private:
	std::string _name;
	std::string _title;
	Sorcerer(void);

public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &other);
	~Sorcerer(void);

	Sorcerer & operator =(Sorcerer const &other);
	
	std::string getName(void) const;
	std::string getTitle(void) const;

	void polymorph(Victim const &vict) const;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const & i);

#endif