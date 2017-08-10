#include "FragTrap.hpp"

int main( void ) {

    
    FragTrap    *lalka = new FragTrap("lalka");

    srand( time( 0 ) );
    lalka->vaulthunter_dot_exe("PRO");
    lalka->rangedAttack("PRO");
    lalka->melleAttack("PRO");
    lalka->vaulthunter_dot_exe("PRO");
    lalka->vaulthunter_dot_exe("PRO");
    lalka->vaulthunter_dot_exe("PRO");
    lalka->takeDamage(10);
    lalka->takeDamage(10);
    lalka->takeDamage(10);
    lalka->takeDamage(10);
    lalka->takeDamage(100);
    lalka->beRepaired(15);
    lalka->beRepaired(15);
    lalka->beRepaired(15);
    lalka->beRepaired(15);
    lalka->beRepaired(15);
    lalka->beRepaired(100);
    lalka->beRepaired(15);

    delete(lalka);
    return 0;
}