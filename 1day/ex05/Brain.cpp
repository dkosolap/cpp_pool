#include "Brain.hpp"

Brain::Brain() {
    srand(time(0));

    _iq = 80 + (rand() % 60);
}

std::string Brain::identify( void ) {
    std::stringstream ss;
    ss << std::hex << this;
    return ss.str();
}
