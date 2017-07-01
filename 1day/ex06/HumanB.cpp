#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n) {}

void        HumanB::setWeapon(Weapon w) {
    this->wep = &w;
}

void        HumanB::attack( void ) {
    std::cout << this->name << "attacks with his " << this->wep->getType() << std::endl;
}
