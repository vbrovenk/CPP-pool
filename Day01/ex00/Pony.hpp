#ifndef PONY_HPP
# define PONY_HPP

# include <iostream> 

class Pony
{
	private:
		std::string _name;
		std::string _color;

	public:
		Pony(std::string name, std::string color);
		~Pony();
};

#endif