#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H 
# include <iostream>
# include "Weapon.hpp"

class HumanB {

public:
    std::string name;
    void        attack( void );
    void        setWeapon(Weapon w);
    HumanB(std::string n);
    Weapon      *wep;
};

#endif
