#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
    _type = "default";
}

void        ZombieEvent::setZombieType( std::string type ) {
    _type = type;
}

Zombie*     ZombieEvent::newZombie( std::string name ) {
    Zombie  *znew = new Zombie();

    znew->type = _type;
    znew->name = name;
    return znew;
}

Zombie*     ZombieEvent::randomChump( void ) {
      Zombie  *znew = new Zombie();
      znew->announce();
      return znew;
}
