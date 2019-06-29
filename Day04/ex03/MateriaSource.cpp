#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_source[i] = NULL;
}


MateriaSource::MateriaSource(MateriaSource const &other)
{
	*this = other;
}

MateriaSource & MateriaSource::operator =(MateriaSource const &other)
{
	if (this != &other)
	{

	}
	return *this;
}


MateriaSource::~MateriaSource(void)
{

}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] == NULL)
		{
			_source[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] != NULL && _source[i]->getType() == type)
			return _source[i]->clone();
	}
	return NULL;
}
