#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"



int main(void)
{
	try
	{
		// Bureaucrat tolik("Tolik", 137);

		// ShrubberyCreationForm sh("test");
		// RobotomyRequestForm rr("Robot");
		// PresidentialPardonForm pp("DOCS");

		// std::cout << sh;
		// tolik.executeForm(sh);
		// tolik.signForm(sh);
		// std::cout << sh;
		// tolik.executeForm(sh);

		// std::cout << "==========================" << std::endl;

		// Bureaucrat oleg("Oleg", 45);

		// std::cout << rr;
		// oleg.executeForm(rr);
		// oleg.signForm(rr);
		// std::cout << rr;
		// oleg.signForm(rr);
		// oleg.executeForm(rr);
		// oleg.executeForm(rr);
		// oleg.executeForm(rr);

		// tolik.executeForm(sh);

		// std::cout << "==========================" << std::endl;
		
		// Bureaucrat alyoshka("Alyoshka", 5);
		
		// std::cout << pp;
		// alyoshka.executeForm(pp);
		// alyoshka.signForm(pp);
		// std::cout << pp;

		// alyoshka.executeForm(pp);

		

	}
	catch (std::exception & e)
	{
		std::cout << "CATCH Exception" << std::endl;
	}

	return 0;
}