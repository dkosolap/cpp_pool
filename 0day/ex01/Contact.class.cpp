
#include "Contact.class.hpp"

void	Contact::addContact( void ) {

	std::cout << "Write First name: ";
	std::getline(std::cin, this->fname);
	std::cout << "Write Last name: ";
	std::getline(std::cin, this->lname);
	std::cout << "Write nickname: ";
	std::getline(std::cin, this->nname);
	std::cout << "Write login: ";
	std::getline(std::cin, this->login);
	std::cout << "Write postal address: ";
	std::getline(std::cin, this->post);
	std::cout << "Write email address: ";
	std::getline(std::cin, this->email);
	std::cout << "Write phone number: ";
	std::getline(std::cin, this->phone);
	std::cout << "Write birthday date: ";
	std::getline(std::cin, this->birthday);
	std::cout << "Write favorite meal: ";
	std::getline(std::cin, this->meal);
	std::cout << "Write underwear color: ";
	std::getline(std::cin, this->color);
	std::cout << "Write darkest secret: ";
	std::getline(std::cin, this->secret);
	return;
}

void	Contact::printContact( void ) {

	std::cout << "|" << std::setw(10) << this->fname;
	std::cout << "|" << std::setw(10) << this->lname;
	std::cout << "|" << std::setw(10) << this->nname << std::endl;
	return;
}
int		Contact::printAll( void ) {

	std::cout << std::endl;
	std::cout << "First name:\t\t";
	std::cout << this->fname << std::endl;
	std::cout << "Last name:\t\t";
	std::cout << this->lname << std::endl;
	std::cout << "Nickname:\t\t";
	std::cout << this->nname << std::endl;
	std::cout << "Login:\t\t\t";
	std::cout << this->login << std::endl;
	std::cout << "Postal address:\t\t";
	std::cout << this->post << std::endl;
	std::cout << "Email address:\t\t";
	std::cout << this->email << std::endl;
	std::cout << "Phone number:\t\t";
	std::cout << this->phone << std::endl;
	std::cout << "Birthday date:\t\t";
	std::cout << this->birthday << std::endl;
	std::cout << "Favorite meal:\t\t";
	std::cout << this->meal << std::endl;
	std::cout << "Underwear color:\t";
	std::cout << this->color << std::endl;
	std::cout << "Darkest secret:\t\t";
	std::cout << this->secret << std::endl;
	std::cout << std::endl;
	return 0;
}
