#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main( void ) {

    FragTrap    lalka("FR4TP-TP");
    ScavTrap    lamka("TF42i-53");

    srand( time( 0 ) );
    lalka.takeDamage(lamka.rangedAttack("FR4TP"));
    lamka.takeDamage(lalka.rangedAttack("TF42i"));
    // lalka.melleAttack("PRO");
    // lalka.takeDamage(10);
    // lalka.takeDamage(10);
    // lalka.takeDamage(10);
    // lalka.takeDamage(10);
    // lalka.takeDamage(100);
    // lalka.beRepaired(15);
    // lalka.beRepaired(15);
    // lalka.beRepaired(15);
    // lalka.beRepaired(15);
    // lalka.beRepaired(15);
    // lalka.beRepaired(100);
    // lalka.beRepaired(15);

    // delete(lalka);
    return 0;
}