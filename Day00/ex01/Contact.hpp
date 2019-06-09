#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact{

public:
	Contact(void);
	Contact(int index);

	void	printInfo(void) const;
	int		getIndex(void) const;
	std::string	getFirstName(void) const;

private:
	int				_index;
	std::string		_firstName;


};

#endif