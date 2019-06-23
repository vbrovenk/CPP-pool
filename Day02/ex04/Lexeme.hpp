#ifndef LEXEME_HPP
# define LEXEME_HPP

class Lexeme
{

private:
	std::string _name;

public:
	Lexeme(void);
	Lexeme(const Lexeme &other);	
	~Lexeme(void);

	Lexeme &operator =(const Lexeme &other);

	
};

#endif