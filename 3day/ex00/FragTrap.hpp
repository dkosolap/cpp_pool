#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H 
# include <iostream>

class FragTrap {

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
    FragTrap(std::string const & name);
    ~FragTrap( void );
    void    rangedAttack(std::string const & target);
    void    melleAttack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    vaulthunter_dot_exe(std::string const & target);
};

#endif
