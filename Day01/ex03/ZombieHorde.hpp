#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
	private:
		int _count;
		Zombie *_zombies;

	public:
		ZombieHorde(int N);
		~ZombieHorde();
		void announce(void) const;
};

#endif