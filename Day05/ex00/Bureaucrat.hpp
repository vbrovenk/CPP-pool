#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{

private:
	const std::string _name;
	int _grade;
	Bureaucrat(void);
 
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &other);
	~Bureaucrat();

	Bureaucrat &operator =(Bureaucrat const &other);

	std::string getName() const;
	int getGrade() const;

	void increaseGrade();
	void decreaseGrade();


	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException(void);
			~GradeTooHighException(void) _NOEXCEPT;
			GradeTooHighException(GradeTooHighException const &other);

			GradeTooHighException &operator =(GradeTooHighException const &other);


	};

	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException(void);
			~GradeTooLowException(void) _NOEXCEPT;
			GradeTooLowException(GradeTooLowException const &other);

			GradeTooLowException &operator =(GradeTooLowException const &other);
	};
};

std::ostream &operator <<(std::ostream &o, Bureaucrat const & i);

#endif