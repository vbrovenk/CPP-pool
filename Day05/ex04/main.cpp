#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include "Intern.hpp"

#include "OfficeBlock.hpp"

int main(void)
{
	Intern idiotOne;
	
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 73);
	
	OfficeBlock ob;
	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);
	
	try
	{
		ob.doBureaucracy("robotomy request", "Pigley");
	}
	catch (OfficeBlock::EmptySpotException & e)
	{
		/* specific known error happens, say something */
		std::cout << "One of spot is empty." << std::endl;
	}
	catch (std::exception & e)
	{
		/* oh god, unknown error, what to do ?! */
		std::cout << "# CAUGHT EXCEPTION #" << std::endl;

	}
	return 0;
}