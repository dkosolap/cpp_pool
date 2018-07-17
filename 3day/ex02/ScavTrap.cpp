
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
}

void		ScavTrap::challengeNewcomer( std::string const & target ) {
	std::string     weapons[] = {"knife", "laser", "cat with a silencer", "grenades", "frying pan"};

	if (_energy < _melleAttack) {
	    std::cout << "SCAV-TP <" << _name << "> doesn't attacks <" << target << "> at weapon, because haven't energy !" << std::endl;
	    return ;
	}
	std::cout << "SCAV-TP <" << _name << "> attacks take " << weapons[rand() % 5] << " and hit <" << target << ">, causing <" << _melleAttack << "> points of damage !" << std::endl;
	_energy -= _melleAttack;
}
