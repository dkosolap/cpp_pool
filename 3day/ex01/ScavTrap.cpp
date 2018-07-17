
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	_maxHit = 100;
	_maxEnergy = 50;
	_hit = _maxHit;
	_level = 1;
	_melleAttack = 20;
	this->_rangedAttack = 15;
	this->_armorReduction = 3;
	std::cout << "Default constructor called." << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &ref) {
	*this = ref;
	std::cout << "Copy constructor called." << std::endl;
}

ScavTrap::ScavTrap( std::string name ) {
	*this = ScavTrap();
	_name = name;
	std::cout << "SCAV-TP " << _name << " was born!!!" << std::endl;
}


ScavTrap::~ScavTrap( void ) {
	std::cout << "SCAV-TP " << _name << " say: \"hoow no, hoow no, how no no no\" and die !" << std::endl;
}

ScavTrap 	&ScavTrap::operator=( ScavTrap const &ref) {
	_maxHit = ref._maxHit;
	_maxEnergy = ref._maxEnergy;
	_hit = ref._hit;
	_energy = ref._energy;
	_level = ref._level;
	_melleAttack = ref._melleAttack;
	_rangedAttack = ref._rangedAttack;
	_armorReduction = ref._armorReduction;
	_name = ref._name;
	std::cout << "Operator overload called." << std::endl;
	return (*this);
}

std::string	ScavTrap::getName( void ) const {
	return (this->_name);
}

void		ScavTrap::rangedAttack( std::string const & target ) {
	if (_energy < _rangedAttack) {
		std::cout << "SCAV-TP "  << _name << " doesn't attacks <" << target << "> at range, because haven't energy !" << std::endl;
		return ;
	}
	std::cout << "SCAV-TP "  << _name << " attacks <" << target << "> at range, causing <" << _rangedAttack << "> points of damage !" << std::endl;
	_energy -= _rangedAttack;
}

void		ScavTrap::meleeAttack( std::string const & target ) {
	if (_energy < _rangedAttack) {
	    std::cout << "SCAV-TP "  << _name << " doesn't attacks <" << target << "> at melee, because haven't energy !" << std::endl;
	    return ;
	}
	std::cout << "SCAV-TP "  << _name << " attacks <" << target << "> at melee, causing <" << _melleAttack << "> points of damage !" << std::endl;
	_energy -= _rangedAttack;
}

void		ScavTrap::takeDamage( unsigned int amount ) {
	amount -= _armorReduction;
	if (_hit < 1) {
	    std::cout << "SCAV-TP "  << _name << " deid !" << std::endl;
	    return ;
	}
	std::cout << "SCAV-TP "  << _name << " take  " << amount << " damage !" << std::endl;
	if (_hit - amount >  _maxHit)
	    _hit = 0;
	else
	    _hit -= amount;
	if (!_hit)
	    std::cout << "And die !" << std::endl;
}

void		ScavTrap::beRepaired( unsigned int amount ) {
	if (_hit == _maxHit) {
	    std::cout << "SCAV-TP "  << _name << " hit is full !" << std::endl;
	    return ;
	}
	std::cout << "SCAV-TP "  << _name << " take " << amount << " repaired !" << std::endl;
	if (_hit + amount > _maxHit)
	    _hit = _maxHit;
	else
	    _hit += amount;
}

void		ScavTrap::challengeNewcomer( std::string const & target ) {
	std::string     weapons[] = {"knife", "laser", "cat with a silencer", "grenades", "frying pan"};

	if (_energy < _melleAttack) {
	    std::cout << "SCAV-TP "  << _name << " doesn't attacks <" << target << "> at weapon, because haven't energy !" << std::endl;
	    return ;
	}
	std::cout << "SCAV-TP "  << _name << " attacks take " << weapons[rand() % 5] << " and hit <" << target << ">, causing <" << _melleAttack << "> points of damage !" << std::endl;
	_energy -= _melleAttack;
}
