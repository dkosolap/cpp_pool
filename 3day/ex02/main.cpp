#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main() {

	srand(time( 0 ));
	FragTrap    *lalka = new FragTrap("Lalka");
	ScavTrap    *parka = new ScavTrap("Palka");

	lalka->vaulthunter_dot_exe(parka->getName());
	lalka->rangedAttack(parka->getName());
	lalka->meleeAttack(parka->getName());
	lalka->vaulthunter_dot_exe(parka->getName());
	lalka->vaulthunter_dot_exe(parka->getName());
	parka->challengeNewcomer(lalka->getName());
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
	delete(parka);
	return (0);
}
// vaulthunter_dot_exe
// challengeNewcomer