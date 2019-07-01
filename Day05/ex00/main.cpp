#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat *b1;
	try
	{
		b1 = new Bureaucrat("Kirill", 148);
		// std::cout << *b1;
		// b1->increaseGrade();
		// b1.increaseGrade();
		// b1.increaseGrade();
		b1->decreaseGrade();

		b1->decreaseGrade();
		b1->decreaseGrade();
		std::cout << *b1;
	}
	catch(std::exception & e)
	{
		std::cout << "CATCH" << std::endl;

	}

	return 0;
}