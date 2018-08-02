#include "Character.hpp"

Character::Character() {
}

Character::Character( Character const &ref ) {
	*this = ref;
}

Character 			&Character::operator=( Character const &ref ) {
	AMateria		*cpy;

	if (this != &ref) {
		_name = ref._name;
		for (int i = 0; i < 4; ++i)	{
			cpy = ref._mat[i]->clone();
			delete _mat[i];
			_mat[i] = cpy;
		}
		_count = ref._count;
	}
	return (*this);
}

Character::~Character() {
}


Character::Character( std::string const &name ) : _name(name) {
	_count = 0;
	for (int i = 0; i < 4; ++i) {
		_mat[i] = NULL;
	}
}

std::string const	&Character::getName() const {
	return (_name);
}

void				Character::equip(AMateria* m) {

	if (_count < 4) {
		_mat[_count] = m;
		_count++;
	}
}

void				Character::use(int idx, ICharacter& target) {
	if (idx < 4	&& _mat[idx])
		_mat[idx]->use(target);
}

void				Character::unequip(int idx) {
	if (idx < 4)
		_mat[idx] = NULL;
}
