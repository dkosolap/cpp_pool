#include "FragTrap.hpp"

    FragTrap::FragTrap(std::string const & name) : ClapTrap(name) {}


void         FragTrap::vaulthunter_dot_exe(std::string const & target) {
    std::string     weapons[] = {"knife", "laser", "cat with a silencer", "grenades", "frying pan"};

    if (_energyPoint < 25) {
        std::cout << _name << " doesn't attacks <" << target << "> at weapon, because haven't energy !" << std::endl;
        return ;
    }
    std::cout << _name << " attacks take " << weapons[rand() % 5] << " and hit <" << target << ">, causing <" << 25 << "> points of damage !" << std::endl;
    _energyPoint -= 25;
}
