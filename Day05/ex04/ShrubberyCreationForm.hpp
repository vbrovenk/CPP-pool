#ifndef SHRUBBERYCREAIONFORM_HPP
# define SHRUBBERYCREAIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{

private:
	std::string _target;
	ShrubberyCreationForm(void);


public:
	ShrubberyCreationForm(std::string target);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	ShrubberyCreationForm &operator =(ShrubberyCreationForm const &other);


	void execute(Bureaucrat const & executor) const;
	
};

#endif