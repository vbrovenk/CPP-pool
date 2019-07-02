#include "OfficeBlock.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"


OfficeBlock::OfficeBlock(void)
{

}

OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executor)
{
	_intern = &intern;
	_signer = &signer;
	_executor = &executor;
}

OfficeBlock::~OfficeBlock()
{

}

OfficeBlock::OfficeBlock(OfficeBlock const &other)
{
	*this = other;
}

OfficeBlock &OfficeBlock::operator =(OfficeBlock const &other)
{
	if (this != &other)
	{

	}
	return *this;
}

void OfficeBlock::setIntern(Intern &intern)
{
	_intern = &intern;
}

void OfficeBlock::setSigner(Bureaucrat &signer)
{
	_signer = &signer;
}

void OfficeBlock::setExecutor(Bureaucrat &executor)
{
	_executor = &executor;
}

void OfficeBlock::doBureaucracy(std::string formName, std::string target)
{
	if (_intern == NULL || _signer == NULL || _executor == NULL)
		throw EmptySpotException();
	Form *newForm = _intern->makeForm(formName, target);
	std::cout << "Intern creates a " << formName << " (s.grade " << newForm->getGradeSign() <<
		", ex.grade " << newForm->getGradeExecute() << ") targeted on " << target 
		<< (newForm->getSignedStatus() ? " (Signed)" : " (Unsigned)") << std::endl;

	_signer->signForm(*newForm);
	_executor->executeForm(*newForm);
	// std::cout << "Office block succesfully done." << std::endl;
}



//  ==============  NESTED CLASSES  =================

OfficeBlock::EmptySpotException::EmptySpotException(void)
{

}


OfficeBlock::EmptySpotException::~EmptySpotException(void) throw()
{
	
}

OfficeBlock::EmptySpotException::EmptySpotException(
	OfficeBlock::EmptySpotException const & other)
{
	*this = other;
}

OfficeBlock::EmptySpotException &OfficeBlock::EmptySpotException::operator =(OfficeBlock::EmptySpotException const &other)
{
	if (this != &other)
	{

	}
	return *this;
}