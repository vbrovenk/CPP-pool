#ifndef PRESIDENTALPARDONFORM_HPP
# define PRESIDENTALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{

private:
	std::string _target;
	PresidentialPardonForm(void);


public:
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm(PresidentialPardonForm const &other);
	PresidentialPardonForm &operator =(PresidentialPardonForm const &other);


	void execute(Bureaucrat const & executor) const;
	
};

#endif