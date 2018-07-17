#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
}

void         FragTrap::vaulthunter_dot_exe(std::string const & target) {
    std::string     weapons[] = {"knife", "laser", "cat with a silencer", "grenades", "frying pan"};

    if (_energy < _rangedAttack) {
        std::cout << "FR4G-TP <"  << _name << "> doesn't attacks <" << target << "> at weapon, because haven't energy !" << std::endl;
        return ;
    }
    std::cout << "FR4G-TP <"  << _name << "> attacks take " << weapons[rand() % 5] << " and hit <" << target << ">, causing <" << _rangedAttack << "> points of damage !" << std::endl;
    _energy -= _rangedAttack;
}

