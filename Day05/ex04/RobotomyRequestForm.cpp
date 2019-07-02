#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("robot", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
	_target = target;
}


RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : Form("RobotRequest", 72, 45)
{
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator =(RobotomyRequestForm const &other)
{
	if (this != &other)
	{
		_target = other._target;
	}
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	
	static int time = 0;

	std::cout << "MAKE SOME NOISE!" << std::endl;
	if (time % 2 == 0)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << _target << " robotomized with fail" << std::endl;
	time++;
}
