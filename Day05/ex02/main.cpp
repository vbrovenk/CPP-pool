#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"



int main(void)
{
	try
	{
		Bureaucrat bur("Tolik", 5);
		Bureaucrat bur2("Oleg", 7);

		ShrubberyCreationForm sh("test");
		RobotomyRequestForm rr("Robot");
		PresidentialPardonForm pp("DOCS");

		// sh.execute();

		// rr.execute(bur);
		// rr.execute(bur);
		// rr.execute(bur);
		
		bur.executeForm(rr);

		// std::cout << bur;
	}
	catch (std::exception & e)
	{
		std::cout << "CATCH Exception" << std::endl;
	}

	return 0;
}