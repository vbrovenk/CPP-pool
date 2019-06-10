#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact{

public:
	Contact(void);
	Contact(int index);

	void		printInfo(void) const;
	int			getIndex(void) const;
	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;

private:
	int				_index;
	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickName;
	std::string		_login;
	std::string		_postalAddress;
	std::string		_emailAddress;
	std::string		_phoneNumber;
	std::string		_birthdayDate;
	std::string		_favoriteMeal;
	std::string		_underwearColor;
	std::string		_darkestSecret;

};

#endif