#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

class Form;

class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

class Intern
{

private:
	Form *makeShrubberyCreationForm(std::string const &target);
	Form *makeRobotomyRequestForm(std::string const &target);
	Form *makePresidentialPardonForm(std::string const &target);


	class UnknownFormTypeException : public std::exception
	{
		public:
			UnknownFormTypeException(void);
			~UnknownFormTypeException(void) throw();
			UnknownFormTypeException(UnknownFormTypeException const &other);

			UnknownFormTypeException &operator =(UnknownFormTypeException const &other);
	};

public:
	Intern(void);
	~Intern();

	Intern(Intern const &other);
	Intern &operator =(Intern const &other);

	Form *makeForm(std::string formName, std::string target);
};

#endif