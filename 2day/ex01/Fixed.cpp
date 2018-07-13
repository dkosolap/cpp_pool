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

Fixed::Fixed( int num ) {
	std::cout << "Int constructor called" << std::endl;
	this->_fp = 256 * num;
}

Fixed::Fixed( float num ) {
	std::cout << "Float constructor called" << std::endl;
	this->_fp = roundf(256 * num);
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int			Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fp);
}

void		Fixed::setRawBits( int const raw ) {
	this->_fp = raw;
}

float 		Fixed::toFloat( void ) const {
	return (float(this->_fp) / 256);
}

int 		Fixed::toInt( void ) const {
	return (this->_fp / 256);
}

Fixed&		Fixed::operator=( Fixed const &ref ) {
		std::cout << "Assignation operator called" << std::endl;
		if (this != &ref) {
			this->_fp = ref.getRawBits();
		}
		return *this;
}

std::ostream&  operator<<(std::ostream& os, const Fixed& rf) {
	os << rf.toFloat();
	return (os);
}

