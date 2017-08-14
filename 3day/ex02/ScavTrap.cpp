#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name) {
    _hitPoint = _maxHitPoint = 100;
    _energyPoint = _maxHitPoint = 50;
    _level = 1;
    _meelDamage = 20;
    _rangeDamage = 15;
    _armorDamage = 3;
}

void         ScavTrap::challengeNewcomer(std::string const & target) {
    std::string     weapons[] = {"knife", "laser", "cat with a silencer", "grenades", "frying pan"};

    if (_energyPoint < 25) {
        std::cout << "SCAV-TP "  << _name << " doesn't attacks <" << target << "> at weapon, because haven't energy !" << std::endl;
        return ;
    }
    std::cout << "SCAV-TP "  << _name << " attacks take " << weapons[rand() % 5] << " and hit <" << target << ">, causing <" << 25 << "> points of damage !" << std::endl;
    _energyPoint -= 25;
}
