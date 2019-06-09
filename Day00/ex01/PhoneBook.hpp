#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{

public:
	PhoneBook(void);
	void	addNewContact(void);
	int		getIndex(void);
	void	showContacts(void) const;

private:
	Contact _contacts[8];
	int		_index;

};

#endif