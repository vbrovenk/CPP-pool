#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("shrubbery", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyForm", 145, 137)
{
	_target = target;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string fileName = _target + "_shrubbery";
	std::cout << "CHECK" << std::endl;
	std::ofstream ofs(fileName);

	ofs << "           ,@@@@@@@, " << std::endl << 
    "   ,,,.   ,@@@@@@/@@,  .oo8888o. "<< std::endl << 
    ",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o " << std::endl << 
   ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88\' " << std::endl << 
   "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888\' " << std::endl << 
   "%&&%/ %&%%&&@@\\ V /@@\' `88\\8 `/88\'" << std::endl << 
   "`&%\\ ` /%&\'    |.|        \\ \'|8\'" << std::endl << 
    "   |o|        | |         | | " << std::endl << 
    "   |.|        | |         | | " << std::endl << 
"jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ " << std::endl;
	ofs.close();
}
