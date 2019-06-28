#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"
# include <iostream>
class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator(void);
	~AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const &other);

	AssaultTerminator &operator =(AssaultTerminator const &other);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;	
	
};

#endif