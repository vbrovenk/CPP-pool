#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"


int main(void)
{
	try
	{
		Bureaucrat bur("Tolik", 5);
		Bureaucrat bur2("Oleg", 7);

		ShrubberyCreationForm sh("test");
		// sh.action();


		std::cout << bur;
	}
	catch (std::exception & e)
	{
		std::cout << "CATCH Exception" << std::endl;
	}

	return 0;
}