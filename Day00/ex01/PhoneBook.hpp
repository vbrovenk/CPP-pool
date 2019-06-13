#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook{

public:
	PhoneBook(void);

	void	addNewContact(void);

	int		getIndex(void) const;
	void	showContacts(void) const;
	void	fullContactInfo(void) const;

private:
	Contact _contacts[8];
	int		_index;

	void	_cutString(std::string needCut) const;

};

#endif