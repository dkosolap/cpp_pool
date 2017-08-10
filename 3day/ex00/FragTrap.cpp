#include "FragTrap.hpp"

unsigned int const   FragTrap::maxHitPoint = 100;
unsigned int const   FragTrap::maxEnergyPoint = 100;
unsigned int const   FragTrap::level = 1;

// constructors, destructors

    FragTrap::FragTrap(std::string const & name) : meelDamage(30), rangeDamage(20), armorDamage(5) {
        _name = name;
        _hitPoint = 100;
        _energyPoint = 100;
        std::cout << "FR4G-TP " << _name << " was born!!!" << std::endl;
    }
    FragTrap::~FragTrap(void) {
        std::cout << "FR4G-TP " << _name << " say: \"hoow no, hoow no, how no no no\" and die !" << std::endl;
    }

// method
    void        FragTrap::rangedAttack(std::string const & target) {
        if (_energyPoint < 25) {
            std::cout << "FR4G-TP "  << _name << " doesn't attacks <" << target << "> at range, because haven't energy !" << std::endl;
            return ;
        }
        std::cout << "FR4G-TP "  << _name << " attacks <" << target << "> at range, causing <" << rangeDamage << "> points of damage !" << std::endl;
        _energyPoint -= 25;
    }

    void        FragTrap::melleAttack(std::string const & target) {
        if (_energyPoint < 25) {
            std::cout << "FR4G-TP "  << _name << " doesn't attacks <" << target << "> at melee, because haven't energy !" << std::endl;
            return ;
        }
        std::cout << "FR4G-TP "  << _name << " attacks <" << target << "> at melee, causing <" << meelDamage << "> points of damage !" << std::endl;
        _energyPoint -= 25;
    }

    void        FragTrap::takeDamage(unsigned int amount) {
        amount -= armorDamage;
        if (_hitPoint < 1) {
            std::cout << "FR4G-TP "  << _name << " deid !" << std::endl;
            return ;
        }
        std::cout << "FR4G-TP "  << _name << " take  " << amount << " damage !" << std::endl;
        if (_hitPoint - amount >  100)
            _hitPoint = 0;
        else
            _hitPoint -= amount;
        if (!_hitPoint)
            std::cout << "And die !" << std::endl;
    }

    void        FragTrap::beRepaired(unsigned int amount) {
        if (_hitPoint == 100) {
            std::cout << "FR4G-TP "  << _name << " hit is full !" << std::endl;
            return ;
        }
        std::cout << "FR4G-TP "  << _name << " take " << amount << " repaired !" << std::endl;
        if (_hitPoint + amount > 100)
            _hitPoint = 100;
        else
            _hitPoint += amount;

    }

    void         FragTrap::vaulthunter_dot_exe(std::string const & target) {
        std::string     weapons[] = {"knife", "laser", "cat with a silencer", "grenades", "frying pan"};

        if (_energyPoint < 25) {
            std::cout << "FR4G-TP "  << _name << " doesn't attacks <" << target << "> at weapon, because haven't energy !" << std::endl;
            return ;
        }
        std::cout << "FR4G-TP "  << _name << " attacks take " << weapons[rand() % 5] << " and hit <" << target << ">, causing <" << 25 << "> points of damage !" << std::endl;
        _energyPoint -= 25;
    }
