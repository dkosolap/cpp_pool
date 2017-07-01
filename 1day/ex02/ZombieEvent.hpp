#ifndef ZOMBIEEVENT_CLASS_H
# define ZOMBIEEVENT_CLASS_H 

# include "Zombie.hpp"
# include <iostream>

class ZombieEvent {

public:
    void        setZombieType( std::string type );
    Zombie*     newZombie( std::string name );
    Zombie*     randomChump( void );
    ZombieEvent();
private:
    std::string _type;
};

#endif
