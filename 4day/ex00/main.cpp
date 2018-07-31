#include "Sorcerer.hpp"
#include "Peon.hpp"

int		main( void ) {
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Peon lalka("Lalka");

	std::cout << robert << jim << joe << lalka;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(lalka);

	return (0);
}