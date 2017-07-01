#include "Weapon.hpp"

Weapon::Weapon (std::string str) {
    _type = str;
}

Weapon::Weapon ( void ) {
    std::string type[] = {
        "Guns",
        "Air-dropped bombs",
        "Air-launched missiles",
        "Rocket artillery",
        "Cold weapon"
    };
    _type = type[rand() % 5];
}


const std::string&  Weapon::getType( void ) {
    const std::string   &str = _type;
    return str;
}

void                Weapon::setType( std::string type) {
    _type = type;
}
