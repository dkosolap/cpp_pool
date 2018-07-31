#include "SuperTrap.hpp"
 
SuperTrap::SuperTrap( void ) : ClapTrap() {
	this->_maxHit = 100;
	this->_maxEnergy = 120;
	this->_hit = this->_maxHit;
	this->_energy = this->_maxEnergy;
	this->_level = 1;
	this->_melleAttack = 60;
	this->_rangedAttack = 15;
	this->_armorReduction = 3;
	std::cout << "Default SuperTrap's constructor called." << std::endl;
}


SuperTrap::SuperTrap( std::string name ) : ClapTrap(name) {
	*this = SuperTrap();
	std::cout << this->_hit << std::endl;
}
