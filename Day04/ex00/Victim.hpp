#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{

protected:
	std::string _name;
	Victim(void);

public:
	Victim(std::string name);
	Victim(Victim const &other);
	virtual ~Victim(void);

	Victim & operator =(Victim const &other);

	std::string getName(void) const;
	virtual void getPolymorphed() const;

};

std::ostream &operator<<(std::ostream &o, Victim const & i);


#endif