#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("president", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentPardon", 25, 5)
{
	_target = target;
}


PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : Form("PresidentPardon", 25, 5)
{
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator =(PresidentialPardonForm const &other)
{
	if (this != &other)
	{
		_target = other._target;
	}
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;

	std::cout << executor;
}
