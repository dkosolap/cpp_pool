#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( void ) {
	this->_maxHit = 60;
	this->_maxEnergy = 120;
	this->_hit = this->_maxHit;
	this->_energy = this->_maxEnergy;
	this->_level = 1;
	this->_melleAttack = 60;
	this->_rangedAttack = 5;
	this->_armorReduction = 0;
	std::cout << "Default NinjaTrap's constructor called." << std::endl;
}


NinjaTrap::NinjaTrap( std::string name ) {
	*this = NinjaTrap();
	this->_name = name;
	std::cout << "NINJ4-TP <" << _name << "> was born!!!" << std::endl;
}



void	NinjaTrap::NinjaAtack( FragTrap const &ref ) {

	if (_energy < _melleAttack) {
		std::cout << "NINJ4-TP <" << _name << "> Protec" << std::endl;
	    return ;
	}
	std::cout << "But NINJ4-TP <" << _name << "> also attac FR4G<" << ref.getName() << "> at sword, causing <" << _melleAttack << "> point of damage !"<< std::endl;
	_energy -= _melleAttack;
}

void	NinjaTrap::NinjaAtack( ScavTrap const &ref ) {

	if (_energy < _melleAttack) {
		std::cout << "NINJ4-TP <" << _name << "> Protec" << std::endl;
	    return ;
	}
	std::cout << "But NINJ4-TP <" << _name << "> also attac SC4V <" << ref.getName() << "> at sword, causing <" << _melleAttack << "> point of damage !"<< std::endl;
	_energy -= _melleAttack;
}
