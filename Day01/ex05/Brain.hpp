#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream> 

class Brain
{

private:
	int _iqLevel;

public:
	Brain(void);
	~Brain();

	std::string identify(void) const;

};

#endif