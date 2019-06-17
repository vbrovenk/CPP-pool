#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{

private:
	const Brain _localBrain;

public:
	Human(void);
	~Human();

	std::string identify(void) const;
	const Brain &getBrain(void);

};

#endif