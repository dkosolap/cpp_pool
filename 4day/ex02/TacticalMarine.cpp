#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine( TacticalMarine const &ref ) {
	*this = ref;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh ..." << std::endl;

}

TacticalMarine		&TacticalMarine::operator=( TacticalMarine const &ref ) {
	(void)ref;
	return (*this);
}

ISpaceMarine*		TacticalMarine::clone() const {
	ISpaceMarine		*clone = new TacticalMarine(*this);
	return (clone);
}

void				TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT !" << std::endl;

}

void				TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with bolter *" << std::endl;

}

void				TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with chainsword *" << std::endl;
}
