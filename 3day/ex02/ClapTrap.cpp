#include "ClapTrap.hpp"

// unsigned int const   ClapTrap::maxHitPoint = 100;
// unsigned int const   ClapTrap::maxEnergyPoint = 100;
// unsigned int const   ClapTrap::level = 1;
// unsigned int const   ClapTrap::meelDamage = 30;
// unsigned int const   ClapTrap::rangeDamage = 20;
// unsigned int const   ClapTrap::armorDamage = 10;

// constructors, destructors

    ClapTrap::ClapTrap(std::string const & name) {
        _name = name;
        _hitPoint = _maxHitPoint = 100;
        _energyPoint = _maxEnergyPoint = 100;
        _level = 1;
        _meelDamage = 30;
        _rangeDamage = 20;
        _armorDamage = 5;
        std::cout << _name << " was born!!!" << std::endl;
    }
    ClapTrap::~ClapTrap(void) {
        std::cout <<  _name << " say: \"hoow no, hoow no, how no no no\" and die !" << std::endl;
    }

// method
    unsigned int        ClapTrap::rangedAttack(std::string const & target) {
        if (_energyPoint < 25) {
            std::cout << _name << " doesn't attacks <" << target << "> at range, because haven't energy !" << std::endl;
            return 0;
        }
        std::cout << _name << " attacks <" << target << "> at range, causing <" << _rangeDamage << "> points of damage !" << std::endl;
        _energyPoint -= 25;
        return _rangeDamage;
    }

    unsigned int        ClapTrap::melleAttack(std::string const & target) {
        if (_energyPoint < 25) {
            std::cout << _name << " doesn't attacks <" << target << "> at melee, because haven't energy !" << std::endl;
            return 0;
        }
        std::cout << _name << " attacks <" << target << "> at melee, causing <" << _meelDamage << "> points of damage !" << std::endl;
        _energyPoint -= 25;
        return _meelDamage;
    }

    void        ClapTrap::takeDamage(unsigned int amount) {
        amount -= _armorDamage;
        if (_hitPoint < 1) {
            std::cout << _name << " deid !" << std::endl;
            return ;
        }
        std::cout << _name << " take  " << amount << " damage !" << std::endl;
        if (_hitPoint < amount)
            _hitPoint = 0;
        else
            _hitPoint -= amount;
        if (!_hitPoint)
            std::cout << "And die !" << std::endl;
    }

    void        ClapTrap::beRepaired(unsigned int amount) {
        if (_hitPoint == _maxHitPoint) {
            std::cout << _name << " hit is full !" << std::endl;
            return ;
        }
        std::cout << _name << " take " << amount << " repaired !" << std::endl;
        if (_hitPoint + amount > _maxHitPoint)
            _hitPoint = _maxHitPoint;
        else
            _hitPoint += amount;

    }

    std::string ClapTrap::getName( void ) {
        return _name;
    }
