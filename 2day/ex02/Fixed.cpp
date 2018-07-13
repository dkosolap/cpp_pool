#include "Fixed.hpp"

Fixed::Fixed( void ) {
	this->_fp = 0; 
	return ;
}

Fixed::Fixed( Fixed const  &ref ) {
	*this = ref;
	return ;
}

Fixed::Fixed( int num ) {
	this->_fp = 256 * num;
}

Fixed::Fixed( float num ) {
	this->_fp = roundf(256 * num);
}

Fixed::~Fixed( void ) {
	return ;
}

int			Fixed::getRawBits( void ) const {
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
		if (this != &ref) {
			this->_fp = ref.getRawBits();
		}
		return *this;
}

bool		Fixed::operator<( Fixed const &ref ) const {
	return (this->toFloat() < ref.toFloat());
}
bool		Fixed::operator>( Fixed const &ref ) const {
	return (this->toFloat() > ref.toFloat());
}
bool		Fixed::operator<=( Fixed const &ref ) const {
	return (this->toFloat() <= ref.toFloat());
}
bool		Fixed::operator>=( Fixed const &ref ) const {
	return (this->toFloat() >= ref.toFloat());
}
bool		Fixed::operator==( Fixed const &ref ) const {
	return (this->toFloat() == ref.toFloat());
}
bool		Fixed::operator!=( Fixed const &ref ) const {
	return (this->toFloat() != ref.toFloat());
}


Fixed  		&Fixed::operator+( Fixed const &ref ) {
	return( *new Fixed(this->toFloat() + ref.toFloat()));
}
Fixed  		&Fixed::operator-( Fixed const &ref ) {
	return( *new Fixed(this->toFloat() - ref.toFloat()));
}
Fixed  		&Fixed::operator*( Fixed const &ref ) {
	return( *new Fixed(this->toFloat() * ref.toFloat()));
}
Fixed  		&Fixed::operator/( Fixed const &ref ) {
	return( *new Fixed(this->toFloat() / ref.toFloat()));
}


Fixed 		&Fixed::operator++( void ) {
	this->_fp++;
	return (*this);
}
Fixed 		Fixed::operator++( int ) {
	Fixed *tmp = new Fixed(*this);

	this->_fp++;
	return(*tmp);
}
Fixed 		&Fixed::operator--( void ) {
	this->_fp--;
	return (*this);
}
Fixed 		Fixed::operator--( int ) {
	Fixed *tmp = new Fixed(*this);

	this->_fp--;
	return(*tmp);
}



Fixed	&Fixed::max(Fixed &first, Fixed &second) {
	return first > second ? first : second;
}
const Fixed	&Fixed::max(Fixed const &first, Fixed const &second) {
	return first > second ? first : second;
}
Fixed	&Fixed::min(Fixed &first, Fixed &second) {
	return first > second ? first : second;
}
const Fixed	&Fixed::min(Fixed const &first, Fixed const &second) {
	return first > second ? first : second;
}


std::ostream&  operator<<(std::ostream& os, const Fixed& rf) {
	os << rf.toFloat();
	return (os);
}

