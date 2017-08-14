#ifndef CLAPTRAP_CLASS_H
# define CLAPTRAP_CLASS_H 
# include <iostream>

class   ClapTrap {
    protected:
        unsigned int    _hitPoint;
        unsigned int    _energyPoint;
        std::string     _name;
        unsigned int  _maxHitPoint;
        unsigned int  _maxEnergyPoint;
        unsigned int  _level;
        unsigned int  _meelDamage;
        unsigned int  _rangeDamage;
        unsigned int  _armorDamage;
// method
    public:
        ClapTrap(std::string const & name);
        ~ClapTrap( void );
        unsigned int    rangedAttack(std::string const & target);
        unsigned int    melleAttack(std::string const & target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        std::string     getName( void );
};

#endif