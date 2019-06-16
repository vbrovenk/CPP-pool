#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string _type;
		std::string _name;

	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie();
		void announce(void) const;

		void setType(std::string type);
		void setName(std::string name);
};

#endif