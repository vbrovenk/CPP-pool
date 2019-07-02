#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(void)
{
	try
	{
		Bureaucrat tolik("Tolik", 6);
		Bureaucrat oleg("Oleg", 7);

		Bureaucrat alyoshka("Alyoshka", 10);

		Form form1("MAIN", 6, 150);
		std::cout << form1;


		tolik.signForm(form1);
		oleg.signForm(form1);

		std::cout << form1;
	}
	catch (std::exception & e)
	{
		std::cout << "CATCH Exception" << std::endl;
	}

	return 0;
}