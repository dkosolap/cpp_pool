#ifndef CLAPTRAP_CLASS_H
# define CLAPTRAP_CLASS_H 
# include <iostream>

class   ClapTrap {
    protected:
        unsigned int    _hitPoint;
        unsigned int    _energyPoint;
        std::string     _name;
    public:
        static unsigned int const   maxHitPoint;
        static unsigned int const   maxEnergyPoint;
        static unsigned int const   level;
        static unsigned int const   meelDamage;
        static unsigned int const   rangeDamage;
        static unsigned int const   armorDamage;
// method
    public:
        ClapTrap(std::string const & name);
        ~ClapTrap( void );
        void    rangedAttack(std::string const & target);
        void    melleAttack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        std::string getName( void );
};

#endif