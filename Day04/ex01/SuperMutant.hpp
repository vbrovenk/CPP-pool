#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp" 

class SuperMutant : public Enemy
{

public:
	SuperMutant(void);
	SuperMutant(SuperMutant const &other);
	virtual ~SuperMutant();

	SuperMutant &operator =(SuperMutant const &other);

	void takeDamage(int damage);
	
};

#endif