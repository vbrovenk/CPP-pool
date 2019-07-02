#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(void)
{
	try
	{
		Bureaucrat bur("Tolik", 5);
		Bureaucrat bur2("Oleg", 7);

		Form form1("MAIN", 6, 150);

		bur.signForm(form1);
		bur2.signForm(form1);

		std::cout << form1;
	}
	catch (std::exception & e)
	{
		std::cout << "CATCH Exception" << std::endl;
	}

	return 0;
}