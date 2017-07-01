#include <iostream>
#include "ZombieHorde.hpp"

int     main() {
    ZombieHorde zh(5);

    zh.announce();
    zh.~ZombieHorde();
    // while (1);
    return (0);
}