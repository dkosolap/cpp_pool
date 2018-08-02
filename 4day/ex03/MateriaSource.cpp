#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	_count = 0;
}

MateriaSource::MateriaSource( MateriaSource const &ref ) {
	*this = ref;
}

MateriaSource 	&MateriaSource::operator=( MateriaSource const &ref ) {
	AMateria		*cpy;

	if (this != &ref) {
		for (int i = 0; i < _count; ++i) {
			cpy = _mat[i]->clone();
			delete _mat[i];
			_mat[i] = cpy;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	return ;
}


void		MateriaSource::learnMateria(AMateria *m) {
	if (_count < 4) {
		_mat[_count] = m;
		_count++;
	}
}

AMateria 	*MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < _count; ++i) {
		if (type == _mat[i]->getType())
			return (_mat[i]->clone());
	}

	return (NULL);
}
