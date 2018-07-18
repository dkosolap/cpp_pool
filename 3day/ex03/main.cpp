#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main() {

	srand(time( 0 ));
	FragTrap    *lalka = new FragTrap("Lalka");
	ScavTrap    *parka = new ScavTrap("Parka");
	NinjaTrap    *varka = new NinjaTrap("Varka");

	varka->meleeAttack(lalka->getName());
	varka->meleeAttack(lalka->getName());

	varka->NinjaAtack(*lalka);
	varka->beRepaired(60);
	varka->NinjaAtack(*lalka);
	varka->NinjaAtack(*parka);
	varka->beRepaired(60);
	varka->NinjaAtack(*parka);
	delete(lalka);
	delete(parka);
	delete(varka);
	return (0);
}
