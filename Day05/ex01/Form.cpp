#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("Lola"), _gradeSign(15), _gradeExecute(5)
{
	_signedStatus = false;
}

Form::~Form()
{
}

Form::Form(std::string name, int gradeSign, int gradeExecute) : _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (_gradeSign < 1 || _gradeExecute < 1)
		throw Form::GradeTooHighException();
	if (_gradeSign > 150 || _gradeExecute > 150)
		throw Form::GradeTooLowException();
	_signedStatus = false;
}

Form::Form(Form const &other) : _name(other._name), _gradeSign(other._gradeSign), _gradeExecute(other._gradeExecute)
{
	*this = other;
}

Form &Form::operator =(Form const &other)
{
	if (this != &other)
	{

	}
	return *this;
}

std::string Form::getName() const
{
	return _name;
}
bool Form::getSignedStatus() const
{
	return _signedStatus;
}
int Form::getGradeSign() const
{
	return _gradeSign;
}
int Form::getGradeExecute() const
{
	return _gradeExecute;
}

void Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > _gradeSign)
		throw Form::GradeTooLowException();
	_signedStatus = true;
}

std::ostream &operator <<(std::ostream &o, Form const & i)
{
	o << "Form: " << i.getName() << ", signed status: " 
	<< std::boolalpha << i.getSignedStatus() << 
	", grade required to sign: " << i.getGradeSign() <<
	", grade required to execure: " << i.getGradeExecute() << std::endl;

	return o;
}


//  ==============  NESTED CLASSES  =================

Form::GradeTooHighException::GradeTooHighException(void)
{

}


Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
	
}

Form::GradeTooHighException::GradeTooHighException(
	Form::GradeTooHighException const & other)
{
	*this = other;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator =(Form::GradeTooHighException const &other)
{
	if (this != &other)
	{

	}
	return *this;
}

Form::GradeTooLowException::GradeTooLowException(void)
{

}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{

}

Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const &other)
{
	*this = other;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator =(Form::GradeTooLowException const &other)
{
	if (this != &other)
	{

	}
	return *this;
}