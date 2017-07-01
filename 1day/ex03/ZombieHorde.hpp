#ifndef ZOMBIEHORDE_CLASS_H
# define ZOMBIEHORDE_CLASS_H 
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde {

public:
    ZombieHorde(int N);
    ~ZombieHorde( void );
    void    announce( void );
private:
    Zombie  *_arr;
    int     _size;
};

#endif
