#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{

private:
	unsigned int xp_;
	std::string _type;

public:
	AMateria(void);
	AMateria(std::string const & type);
	virtual ~AMateria();

	AMateria(AMateria const &other);
	AMateria &operator =(AMateria const &other);


	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);


};


#endif