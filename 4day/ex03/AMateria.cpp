#include "AMateria.hpp"

AMateria::AMateria() {
}

AMateria::~AMateria() {
}

AMateria::AMateria( AMateria const &ref ) {
	*this = ref;
}

AMateria 		&AMateria::operator=( AMateria const &ref ) {
	if (this != &ref) {
		_type = ref.getType();
		xp_ = ref.getXP();
	}
	return (*this);
}

AMateria::AMateria(std::string const &type) {
	xp_ = 0;
	_type = type;
}

std::string const		&AMateria::getType() const {
	return (_type);
}

unsigned int			AMateria::getXP() const {
	return (xp_);
}

void					AMateria::use(ICharacter& target) {
	(void)target;
	xp_ += 10;
}
