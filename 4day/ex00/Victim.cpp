#include "Victim.hpp"

Victim::Victim( void ) {
}

Victim::Victim( Victim const &ref ) {
	*this = Victim(ref.getName());
}

Victim::~Victim( void ) {
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;

}

Victim 	&Victim::operator=( Victim const &ref) {
	if (this != &ref) {
		_name = ref.getName();
	}
	return (*this);
}

Victim::Victim( std::string name) {
	_name = name;
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

std::string		const Victim::getName( void ) const {
	return (_name);
}

std::ostream	&operator<<( std::ostream &os, Victim const &ref) {
	os << "I'm " << ref.getName() << " and I like otters !" << std::endl;
	return (os);
}

void	Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}
