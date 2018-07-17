#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main() {

	srand(time( 0 ));
	ScavTrap    *lalka = new ScavTrap("lalka");

	lalka->challengeNewcomer("PRO");
	lalka->rangedAttack("PRO");
	lalka->meleeAttack("PRO");
	lalka->challengeNewcomer("PRO");
	lalka->challengeNewcomer("PRO");
	lalka->challengeNewcomer("PRO");
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
	return (0);
}