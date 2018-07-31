#include "Character.hpp"

Character::Character() {
}

Character::Character( Character const &ref ) {
	*this = ref;
}

Character::~Character() {
}

Character 			&Character::operator=( Character const &ref ) {
	if (this != &ref) {
		_ap = ref._ap;
		_name = ref.getName();
		_wep = ref._wep;
	}
	return (*this);
}


Character::Character(std::string const & name) : _name(name) {
	_ap = 40;
	_wep = NULL;
}

void				Character::recoverAP() {
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void				Character::equip(AWeapon *wep) {
	_wep = wep;
}

void				Character::attack(Enemy *en) {
	if (_wep) {
		if (_ap) {
			en->takeDamage(_wep->getDamage());
			_ap -= _wep->getAPCost();
			if (_ap < 0)
				_ap = 0;
		}
		std::cout << _name << " attacks " << en->getType() << " with a " << _wep->getName() << std::endl;
		_wep->attack();
		if (en->getHP() < 1)
			delete(en);
	}
}

std::string const	Character::getName() const {
	return (_name);
}

int					Character::getAP() const {
	return _ap;
}

AWeapon	const		*Character::getWeapon(void) const {
	return _wep;
}


std::ostream			&operator<<(std::ostream &os, Character const &ref) {
	if (ref.getWeapon())
		std::cout << ref.getName() << " has " << ref.getAP() << " AP and wields a " << ref.getWeapon()->getName() << std::endl;
	else
		std::cout << ref.getName() << " has " << ref.getAP() << " AP and is unarmed" << std::endl;
	return os;
}
