#include "ScavTrap.hpp"

unsigned int const   ScavTrap::maxHitPoint = 100;
unsigned int const   ScavTrap::maxEnergyPoint = 50;
unsigned int const   ScavTrap::level = 1;

// constructors, destructors

    ScavTrap::ScavTrap(std::string const & name) : meelDamage(20), rangeDamage(15), armorDamage(3) {
        _name = name;
        _hitPoint = 100;
        _energyPoint = 50;
        std::cout << "SCAV-TP " << _name << " was born!!!" << std::endl;
    }
    ScavTrap::~ScavTrap(void) {
        std::cout << "SCAV-TP " << _name << " say: \"hoow no, hoow no, how no no no\" and die !" << std::endl;
    }

// method
    void        ScavTrap::rangedAttack(std::string const & target) {
        if (_energyPoint < 25) {
            std::cout << "SCAV-TP "  << _name << " doesn't attacks <" << target << "> at range, because haven't energy !" << std::endl;
            return ;
        }
        std::cout << "SCAV-TP "  << _name << " attacks <" << target << "> at range, causing <" << rangeDamage << "> points of damage !" << std::endl;
        _energyPoint -= 25;
    }

    void        ScavTrap::melleAttack(std::string const & target) {
        if (_energyPoint < 25) {
            std::cout << "SCAV-TP "  << _name << " doesn't attacks <" << target << "> at melee, because haven't energy !" << std::endl;
            return ;
        }
        std::cout << "SCAV-TP "  << _name << " attacks <" << target << "> at melee, causing <" << meelDamage << "> points of damage !" << std::endl;
        _energyPoint -= 25;
    }

    void        ScavTrap::takeDamage(unsigned int amount) {
        amount -= armorDamage;
        if (_hitPoint < 1) {
            std::cout << "SCAV-TP "  << _name << " deid !" << std::endl;
            return ;
        }
        std::cout << "SCAV-TP "  << _name << " take  " << amount << " damage !" << std::endl;
        if (_hitPoint - amount >  maxHitPoint)
            _hitPoint = 0;
        else
            _hitPoint -= amount;
        if (!_hitPoint)
            std::cout << "And die !" << std::endl;
    }

    void        ScavTrap::beRepaired(unsigned int amount) {
        if (_hitPoint == maxHitPoint) {
            std::cout << "SCAV-TP "  << _name << " hit is full !" << std::endl;
            return ;
        }
        std::cout << "SCAV-TP "  << _name << " take " << amount << " repaired !" << std::endl;
        if (_hitPoint + amount > maxHitPoint)
            _hitPoint = maxHitPoint;
        else
            _hitPoint += amount;

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

    std::string ScavTrap::getName( void ) {
        return _name;
    }
