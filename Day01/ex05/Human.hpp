#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{

private:
	Brain _localBrain;

public:
	Human(void);
	~Human();

	std::string identify(void) const;
	Brain &getBrain(void);

};

#endif