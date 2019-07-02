#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{

private:
	const std::string _name;
	const int _gradeSign;
	const int _gradeExecute;
	bool _signedStatus;

	Form(void);


public:
	Form(std::string name, int gradeSign, int gradeExecute);
	Form(Form const &other);
	virtual ~Form();

	Form &operator =(Form const &other);


	std::string getName() const;
	bool getSignedStatus() const;
	int getGradeSign() const;
	int getGradeExecute() const;

	void beSigned(Bureaucrat const &b);
	virtual void execute(Bureaucrat const & executor) const = 0;


	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException(void);
			~GradeTooHighException(void) throw();
			GradeTooHighException(GradeTooHighException const &other);

			GradeTooHighException &operator =(GradeTooHighException const &other);


	};

	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException(void);
			~GradeTooLowException(void) throw();
			GradeTooLowException(GradeTooLowException const &other);

			GradeTooLowException &operator =(GradeTooLowException const &other);
	};
	
};

std::ostream &operator <<(std::ostream &o, Form const & i);

#endif