#include "Human.hpp"


std::string Human::identify( void ) {
    return this->brain.identify();
}

Brain&   Human::getBrain() {
    return (this->brain);
}