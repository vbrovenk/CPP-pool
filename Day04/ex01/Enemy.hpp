#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
private:
	int _hitPoints;
	std::string _type;
	Enemy(void);

public:
	Enemy(Enemy const &other);
	virtual ~Enemy();

	Enemy &operator =(Enemy const &other);


	Enemy(int hp, std::string const & type);
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int damage);
	
};

#endif