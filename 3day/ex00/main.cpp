#include "FragTrap.hpp"

int	main() {

	srand(time( 0 ));
	FragTrap    *lalka = new FragTrap("lalka");

	lalka->vaulthunter_dot_exe("PRO");
	lalka->rangedAttack("PRO");
	lalka->meleeAttack("PRO");
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
	return (0);
}