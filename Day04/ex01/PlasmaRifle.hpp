#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

public:
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const &other);
	virtual ~PlasmaRifle();

	PlasmaRifle &operator =(PlasmaRifle const &other);

	void attack() const;
	
};

#endif