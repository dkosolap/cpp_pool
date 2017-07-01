#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H 
# include <iostream>
# include "Weapon.hpp"

class HumanA {

public:
    std::string name;
    void        attack( void );
    HumanA(std::string n, Weapon &w);
private:
    Weapon      &wep;
};

#endif
