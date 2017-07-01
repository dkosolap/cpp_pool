#include "Pony.hpp"

Pony		*Pony::ponyOnTheHeap(int age, std::string name) {
	Pony	*res = new Pony(age, name);
	res->_free = true;
	return (res);
}
Pony		Pony::ponyOnTheStack(int age, std::string name) {
	Pony	res(age, name);
	return res;
}
Pony::Pony(int age, std::string name) {
	this->age = age;
	this->name = name;
	this->_free = false;
}
Pony::~Pony( void )
{
	if (this->_free)
		delete(this);
	std::cout << "destructor\n";
}