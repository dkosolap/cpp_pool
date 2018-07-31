#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main() {

	srand(time( 0 ));
	FragTrap    *lalka = new FragTrap("Lalka");
	ScavTrap    *parka = new ScavTrap("Parka");
	NinjaTrap    *varka = new NinjaTrap("Varka");
	SuperTrap	*super = new SuperTrap("Sumer hero fusion power 3");

	// varka->meleeAttack(lalka->getName());
	// varka->meleeAttack(lalka->getName());

	super->NinjaAtack(*lalka);
	super->vaulthunter_dot_exe(lalka->getName());
	// varka->beRepaired(60);
	// varka->NinjaAtack(*lalka);
	// varka->NinjaAtack(*parka);
	// varka->beRepaired(60);
	// varka->NinjaAtack(*parka);
	delete(lalka);
	delete(parka);
	delete(varka);
	delete (super);
	return (0);
}
