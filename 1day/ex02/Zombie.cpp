#include "Zombie.hpp"

void        Zombie::announce( void ) {
    std::string phrase[] = {
        "As dead as a dodo...",
        "Back from the dead...",
        "Dead and gone...",
        "Braiiiiiiinnnssss...",
        "I`m coming..."
        };
    std::cout << "<" << name << "(" << type << ")> " << phrase[(rand()) %5] << std::endl;
}
Zombie::Zombie() {
    std::string type[] = {
        "Crawlers",
        "Romero Zombies",
        "Voodoo Zombie",
        "Runners",
        "Walkers",
        };
    std::string name[] = {
        "Gavriil Mostyn",
        "Marin Arun",
        "Imeda Tendai",
        "Barry Tudur",
        "Iain Yash",
        };
    this->name = name[(rand()) %5];
    this->type = type[(rand()) %5];
}
