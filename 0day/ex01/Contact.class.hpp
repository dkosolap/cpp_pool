
#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <iostream>
# include <iomanip>

class	Contact {

public:
	std::string		fname;
	std::string		lname;
	std::string		nname;
	std::string		login;
	std::string		post;
	std::string		email;
	std::string		phone;
	std::string		birthday;
	std::string		meal;
	std::string		color;
	std::string		secret;

	void	addContact( void );
	void	printContact( void );
	int		printAll( void );
};

#endif
