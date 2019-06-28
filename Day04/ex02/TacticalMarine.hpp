#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

public:
	TacticalMarine(void);
	~TacticalMarine(void);
	TacticalMarine(TacticalMarine const &other);

	TacticalMarine &operator =(TacticalMarine const &other);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;	
	
};

#endif