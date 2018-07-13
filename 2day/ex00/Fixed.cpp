#include "Fixed.hpp"

Fixed::Fixed( void ) {
	this->_fp = 0; 
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const  &ref ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}


Fixed&		Fixed::operator=( Fixed const &ref ) {
		std::cout << "Assignation operator called" << std::endl;
		if (this != &ref) {
			this->_fp = ref.getRawBits();
		}
		return *this;
}

int			Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fp);
}

void		Fixed::setRawBits( int const raw ) {
	this->_fp = raw;
}
