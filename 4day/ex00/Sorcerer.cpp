#include "Sorcerer.hpp"

Sorcerer::Sorcerer( void ) {
	return ;
}

Sorcerer::Sorcerer( Sorcerer const &ref ) {
	*this =  Sorcerer(ref.getName(), ref.getTitle());
}

Sorcerer::~Sorcerer(void) {
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer 	&Sorcerer::operator-( Sorcerer const &ref ) {
	if (this != &ref) {
		_name = ref._name;
		_title = ref._title;
	}
	return (*this);
}

Sorcerer::Sorcerer( std::string name, std::string title ) {
	_name = name;
	_title = title;
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

std::string		const &Sorcerer::getName( void ) const {
	return _name;
}
std::string		const &Sorcerer::getTitle( void ) const {
	return _title;
}

std::ostream	&operator<<( std::ostream &os, Sorcerer const &ref) {
	os << "I am " << ref.getName() << ", " << ref.getTitle() << ", and I like ponies !" << std::endl;
	return (os);
}

void		Sorcerer::polymorph(Victim const &vic) const {
	vic.getPolymorphed();
}
