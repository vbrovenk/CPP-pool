#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include <iostream>
class Squad : public ISquad
{

private:
	int _count;
	ISpaceMarine **_soldiers;

public:
	Squad(void);
	Squad(Squad const &other);
	~Squad(void);
	Squad &operator =(Squad const &other);

	int	getCount(void) const;
	ISpaceMarine*	getUnit(int n) const;
	int				push(ISpaceMarine* soldier);
	
};

#endif