#include "Enemy.hpp"

Enemy::Enemy() {
}

Enemy::Enemy( Enemy const &ref ) {
	*this = ref;
}

Enemy::~Enemy() {
}

Enemy				&Enemy::operator=( Enemy const &ref ) {
	if (this != &ref) {
		_hp = ref.getHP();
		_type = ref.getType();
	}
	return (*this);
}


Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type) {
}

std::string const	Enemy::getType() const {
	return _type;
}

int					Enemy::getHP() const {
	return _hp;
}


void				Enemy::takeDamage(int damage) {
	if (_hp > 0) {
		_hp -= damage;
	}
}
