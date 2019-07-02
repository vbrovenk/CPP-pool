#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{

private:
	std::string _target;
	RobotomyRequestForm(void);


public:
	RobotomyRequestForm(std::string target);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm(RobotomyRequestForm const &other);
	RobotomyRequestForm &operator =(RobotomyRequestForm const &other);


	void execute(Bureaucrat const & executor) const;
	
};

#endif