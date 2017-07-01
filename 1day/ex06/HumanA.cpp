#include "HumanA.hpp"

    HumanA::HumanA(std::string n, Weapon &w) : name(n), wep(w) {}

//     this->wep = ep;
//     this->name = nam;
//     return ;
// }

void        HumanA::attack( void ) {
    std::cout << this->name << "attacks with his " << this->wep.getType() << std::endl;
}
