#include "Squad.hpp"

Squad::Squad() {
	_count = 0;
}

Squad::Squad( Squad const &ref ) {
	*this = ref;
}

Squad::~Squad() {
	for (int i = 0; i < _count; ++i) {
		delete _units[i];
	}
	// delete[] *_units;
}

Squad 				&Squad::operator=( Squad const &ref ) {
	int				i;
	ISpaceMarine	*cpy;

	if (this != &ref) {
		i = 0;
		while (i < _count) {
			cpy = _units[i]->clone();
			delete _units[i];
			_units[i] = cpy;
			i++;
		}
		_count = ref._count;
	}
	return (*this);
}



int					Squad::getCount() const {
	return (_count);
}

ISpaceMarine		*Squad::getUnit(int index) const {
	if (index < _count)
		return (_units[index]);
	return (NULL);
}

int					Squad::push(ISpaceMarine *unit) {
	if (_count < MAX) {
		_units[_count] = unit;
		_count++;
	}
	return (_count);
}
