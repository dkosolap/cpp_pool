#include <iostream>
#include "Sorcerer.hpp"

int			main(void)
{
	Sorcerer	gandalf("Gandalf", "Sorcerer");
	Victim		frodon("Frodon");
	Peon		peon("Pink Invisible Peon");

	std::cout << gandalf;
	std::cout << frodon;
	std::cout << peon;

	gandalf.polymorph(frodon);
	gandalf.polymorph(peon);
	return (0);
}
