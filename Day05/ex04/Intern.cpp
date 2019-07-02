#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


Intern::Intern(void)
{

}

Intern::~Intern()
{

}

Intern::Intern(Intern const &other)
{
	*this = other;
}

Intern &Intern::operator =(Intern const &other)
{
	if (this != &other)
	{

	}
	return *this;
}

Form *Intern::makeShrubberyCreationForm(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomyRequestForm(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::makePresidentialPardonForm(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string typeForm, std::string target)
{
	Form *newForm;

	std::string formTypes[] = {
		"shrubbery request",
		"robotomy request",
		"presidential request"
	};

	Form *(Intern::*ptrFunctions[])(std::string const &target) = {
		&Intern::makeShrubberyCreationForm,
		&Intern::makeRobotomyRequestForm,
		&Intern::makePresidentialPardonForm
	};

	for (int i = 0; i < 3; i++)
	{
		if (formTypes[i] == typeForm)
		{
			newForm = (this->*ptrFunctions[i])(target);
			return newForm;
		}
	}
	std::cout << "Wrong form type!" << std::endl;
	throw UnknownFormTypeException();
}


//  ==============  NESTED CLASSES  =================

Intern::UnknownFormTypeException::UnknownFormTypeException(void)
{

}


Intern::UnknownFormTypeException::~UnknownFormTypeException(void) throw()
{
	
}

Intern::UnknownFormTypeException::UnknownFormTypeException(
	Intern::UnknownFormTypeException const & other)
{
	*this = other;
}

Intern::UnknownFormTypeException &Intern::UnknownFormTypeException::operator =(Intern::UnknownFormTypeException const &other)
{
	if (this != &other)
	{

	}
	return *this;
}