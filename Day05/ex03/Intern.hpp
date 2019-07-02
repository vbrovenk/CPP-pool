#ifndef INTERN_HPP
# define INTERN_HPP

class Intern
{

public:
	Intern(void);
	~Intern();

	Intern(Intern const &other);
	Intern &operator =(Intern const &other);

	Form *makeForm(std::string formName, std::string target);
};

#endif