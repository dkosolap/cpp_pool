#include "Fixed.hpp"
    const int    Fixed::_lit = 8;

    Fixed::Fixed( void ) {
        _raw = 0;
        std::cout << "Default constructor called" << std::endl;
    }

    Fixed::Fixed( Fixed const &cp ) {
        std::cout << "Copy constructor called" << std::endl;
        *this = cp;
    }

    Fixed::~Fixed( void ) {
        std::cout << "Destructor called" << std::endl;
        return ;
    }

    int     Fixed::getRawBits( void ) const {
        std::cout << "getRawBits member function called" << std::endl;
        return _raw;
    }

    void    Fixed::setRawBits( int var ) {
        std::cout << "setRaw member function called" << std::endl;
        _raw = var;
    }

    Fixed   &Fixed::operator=( Fixed const &cp ) {
        std::cout << "Assignation operator called" << std::endl;
        this->_raw = cp.getRawBits();
        return *this;
    }
