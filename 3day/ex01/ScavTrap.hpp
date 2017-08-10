#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H 
# include <iostream>

class   ScavTrap {

    private:
        unsigned int    _hitPoint;
        unsigned int    _energyPoint;
        std::string     _name;

    public:
        static unsigned int const   maxHitPoint;
        static unsigned int const   maxEnergyPoint;
        static unsigned int const   level;

        unsigned int const          meelDamage;
        unsigned int const          rangeDamage;
        unsigned int const          armorDamage;
// method
    private:

    public:
    ScavTrap(std::string const & name);
    ~ScavTrap( void );
    void    rangedAttack(std::string const & target);
    void    melleAttack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    challengeNewcomer(std::string const & target);
    std::string getName( void );
};


#endif