#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) {
    _arr = new Zombie[N];
    _size = N;
}

ZombieHorde::~ZombieHorde( void ) {
    delete[] _arr;
}

void    ZombieHorde::announce( void ) {
    for (int i = 0; i < _size; i++)
        _arr[i].announce();
}
