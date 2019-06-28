#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{

public:
	PowerFist(void);
	PowerFist(PowerFist const &other);
	virtual ~PowerFist();

	PowerFist &operator =(PowerFist const &other);

	void attack() const;
	
};

#endif