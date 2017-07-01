#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int     main()
{
    ZombieEvent ze;

    Zombie      *znew = ze.randomChump();
                znew = ze.randomChump();
                znew = ze.randomChump();
                znew = ze.randomChump();
    return (0);
}