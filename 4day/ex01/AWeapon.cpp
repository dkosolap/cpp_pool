#include "AWeapon.hpp"

AWeapon::AWeapon() {
}

AWeapon::AWeapon( AWeapon const &ref) {
	*this = ref;
}

AWeapon::~AWeapon() {
}

AWeapon 	&AWeapon::operator=( AWeapon const &ref) {
	if (this != &ref) {
		_name = ref.getName();
		_apcost = ref.getAPCost();
		_damage = ref.getDamage();
	}
	return (*this);
}


AWeapon::AWeapon(std::string const & name, int apcost, int damage) {
	_name = name;
	_apcost = apcost;
	_damage = damage;
}

std::string const AWeapon::getName() const {
	return _name;
}

int AWeapon::getAPCost() const {
	return _apcost;
}

int AWeapon::getDamage() const {
	return _damage;
}
