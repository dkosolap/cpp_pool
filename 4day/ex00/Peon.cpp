#include "Peon.hpp"

Peon::Peon( std::string name ):Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon( void ) {
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const {
	std::cout << _name << " has been turned into a pink pony !" << std::endl;
}
