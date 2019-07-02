#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include <iostream>

class Bureaucrat;
class Intern;


class OfficeBlock
{

private:
	Intern *_intern;
	Bureaucrat *_signer;
	Bureaucrat *_executor;

	OfficeBlock(OfficeBlock const &other);
	OfficeBlock &operator =(OfficeBlock const &other);

public:
	OfficeBlock(void);
	OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executor);
	~OfficeBlock();

	void setIntern(Intern &intern);
	void setSigner(Bureaucrat &signer);
	void setExecutor(Bureaucrat &executor);

	void doBureaucracy(std::string formName, std::string target);

	class EmptySpotException : public std::exception
	{
		public:
			EmptySpotException(void);
			~EmptySpotException(void) throw();
			EmptySpotException(EmptySpotException const &other);

			EmptySpotException &operator =(EmptySpotException const &other);
	};

};


#endif
