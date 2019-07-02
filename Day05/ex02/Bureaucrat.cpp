#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : _name(other._name)
{
	*this = other;
}

Bureaucrat &Bureaucrat::operator =(Bureaucrat const &other)
{
	if (this != &other)
	{
		_grade = other._grade;
	}
	return *this;
}


std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::increaseGrade()
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decreaseGrade()
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getSignedStatus() == true)
	{
		std::cout << _name << " can't sign \'" << 
		form.getName() << "\' because this form already signed." << std::endl;
	}
	else
	{
		form.beSigned(*this);
		std::cout << _name << " signs \'" << form.getName() << "\' form." << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	if (form.getSignedStatus() == false)
	{
		std::cout << _name << " can't sign \'" << 
		form.getName() << "\' because this form isn't signed." << std::endl;
	}
	else
	{
		std::cout << _name << " executes " << form.getName() << "form." << std::endl;
		form.execute(*this);
	}

}


std::ostream &operator <<(std::ostream &o, Bureaucrat const & i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return o;
}


//  ==============  NESTED CLASSES  =================

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{

}


Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
	
}

Bureaucrat::GradeTooHighException::GradeTooHighException(
	Bureaucrat::GradeTooHighException const & other)
{
	*this = other;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator =(Bureaucrat::GradeTooHighException const &other)
{
	if (this != &other)
	{

	}
	return *this;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{

}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{

}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const &other)
{
	*this = other;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator =(Bureaucrat::GradeTooLowException const &other)
{
	if (this != &other)
	{

	}
	return *this;
}