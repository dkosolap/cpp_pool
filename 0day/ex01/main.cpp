#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

void	addCommand(Contact *ptr, int *id) {

	if (*id > 7)
	{
		std::cout << "Sorry phone book fill" << std::endl;
		return ;
	}
	ptr->addContact();
	*id += 1;
	std::cout << std::endl;
}

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

void	searchCommand(Contact *book, int id) {

	bool		flag = id;
	std::string	c;

	for (int i = 0; i < id; i++)
	{
		std::cout << std::setw(10) << i;
		book[i].printContact();
	}
	if (!id)
		std::cout << "Phonebook is empty" << std::endl;
	else
		std::cout << std::endl;
	while (flag)
	{
		std::cout << "Write the index: ";
		std::getline(std::cin, c); 
			if (is_number(c) && std::stoi( c ) < id)
				flag = book[std::stoi( c )].printAll();
	}
	std::cout << std::endl;
}

int		main( void ) {
	bool		flag = true;
	int			id = 0;
	Contact		book[8];
	std::string	command;
	while (flag)
	{
		std::cout << "Write a command (ADD/SEARCH/EXIT): ";
		std::getline(std::cin, command); 
		if (!strcmp("EXIT", command.c_str()))
			flag = !flag;
		else if (!strcmp("ADD", command.c_str()))
			addCommand(book + id, &id);
		else if (!strcmp("SEARCH", command.c_str()))
			searchCommand(book, id);
	}
	return (0);
}
