#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
	this->_maxHit = 100;
	this->_maxEnergy = 50;
	this->_hit = this->_maxHit;
	this->_energy = this->_maxEnergy;
	this->_level = 1;
	this->_melleAttack = 20;
	this->_rangedAttack = 15;
	this->_armorReduction = 3;
	std::cout << "Default constructor called." << std::endl;
}

FragTrap::FragTrap( FragTrap const &ref ) {
	*this = ref;
	std::cout << "Copy constructor called." << std::endl;
}

FragTrap::FragTrap( std::string name ) {
	*this = FragTrap();
	this->_name = name;
	std::cout << "FR4G-TP " << _name << " was born!!!" << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FR4G-TP " << _name << " say: \"hoow no, hoow no, how no no no\" and die !" << std::endl;
}

FragTrap	&FragTrap::operator=( FragTrap const &ref ) {
	this->_maxHit = ref._maxHit;
	this->_maxEnergy = ref._maxEnergy;
	this->_hit = ref._hit;
	this->_energy = ref._energy;
	this->_level = ref._level;
	this->_melleAttack = ref._melleAttack;
	this->_rangedAttack = ref._rangedAttack;
	this->_armorReduction = ref._armorReduction;
	this->_name = ref._name;
	std::cout << "Operator overload called." << std::endl;
	return (*this);
}

std::string	FragTrap::getName( void ) const {
	return (this->_name);
}

void		FragTrap::rangedAttack( std::string const & target ) {
	if (_energy < _rangedAttack) {
		std::cout << "FR4G-TP "  << _name << " doesn't attacks <" << target << "> at range, because haven't energy !" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP "  << _name << " attacks <" << target << "> at range, causing <" << _rangedAttack << "> points of damage !" << std::endl;
	_energy -= _rangedAttack;
}

void		FragTrap::meleeAttack( std::string const & target ) {
	if (_energy < _rangedAttack) {
	    std::cout << "FR4G-TP "  << _name << " doesn't attacks <" << target << "> at melee, because haven't energy !" << std::endl;
	    return ;
	}
	std::cout << "FR4G-TP "  << _name << " attacks <" << target << "> at melee, causing <" << _melleAttack << "> points of damage !" << std::endl;
	_energy -= _rangedAttack;
}

void		FragTrap::takeDamage( unsigned int amount ) {
	amount -= _armorReduction;
	if (_hit < 1) {
	    std::cout << "FR4G-TP "  << _name << " deid !" << std::endl;
	    return ;
	}
	std::cout << "FR4G-TP "  << _name << " take  " << amount << " damage !" << std::endl;
	if (_hit - amount > _maxHit)
	    _hit = 0;
	else
	    _hit -= amount;
	if (!_hit)
	    std::cout << "And die !" << std::endl;
}

void		FragTrap::beRepaired( unsigned int amount ) {
	if (_hit == _maxHit) {
	    std::cout << "FR4G-TP "  << _name << " hit is full !" << std::endl;
	    return ;
	}
	std::cout << "FR4G-TP "  << _name << " take " << amount << " repaired !" << std::endl;
	if (_hit + amount > _maxHit)
	    _hit = _maxHit;
	else
	    _hit += amount;
}


void         FragTrap::vaulthunter_dot_exe(std::string const & target) {
    std::string     weapons[] = {"knife", "laser", "cat with a silencer", "grenades", "frying pan"};

    if (_energy < _rangedAttack) {
        std::cout << "FR4G-TP "  << _name << " doesn't attacks <" << target << "> at weapon, because haven't energy !" << std::endl;
        return ;
    }
    std::cout << "FR4G-TP "  << _name << " attacks take " << weapons[rand() % 5] << " and hit <" << target << ">, causing <" << _rangedAttack << "> points of damage !" << std::endl;
    _energy -= _rangedAttack;
}

