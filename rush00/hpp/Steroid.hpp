#ifndef STEROID_HPP
# define STEROID_HPP

#include "AItem.hpp"

class Steroid : public AItem
{
private:
	int _x;
	int _y;

public:
	Steroid(void);
	~Steroid();
	Steroid(Steroid const &other);
	
	Steroid &operator =(Steroid const &other);

	Steroid(int x, int y);


	AItem* clone() const;

};




#endif