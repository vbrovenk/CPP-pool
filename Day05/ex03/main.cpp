#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include "Intern.hpp"



int main(void)
{
	try
	{
		Intern someRandomIntern;

		Form *rrf;

		rrf = someRandomIntern.makeForm("presidential request", "Bender");
		
		std::cout << *rrf;
		Bureaucrat tolik("Tolik", 33);

		tolik.signForm(*rrf);

	}
	catch (std::exception & e)
	{
		std::cout << "CATCH Exception" << std::endl;
	}

	return 0;
}