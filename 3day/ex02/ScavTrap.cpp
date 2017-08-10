#include "ScavTrap.hpp"

unsigned int const   ClapTrap::maxEnergyPoint = 50;
unsigned int const   ClapTrap::meelDamage = 20;
unsigned int const   ClapTrap::rangeDamage = 15;
unsigned int const   ClapTrap::armorDamage = 3;


    ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name) {}
    ScavTrap::~ScavTrap(){};
    void         ScavTrap::challengeNewcomer(std::string const & target) {
        std::string     weapons[] = {"knife", "laser", "cat with a silencer", "grenades", "frying pan"};

        if (_energyPoint < 25) {
            std::cout << _name << " doesn't attacks <" << target << "> at weapon, because haven't energy !" << std::endl;
            return ;
        }
        std::cout << _name << " attacks take " << weapons[rand() % 5] << " and hit <" << target << ">, causing <" << 25 << "> points of damage !" << std::endl;
        _energyPoint -= 25;
    }
