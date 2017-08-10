#include "Fixed.hpp"
    const int    Fixed::_lit = 8;

//constructor destructor
    Fixed::Fixed( void ) {
        _raw = 0;
        // std::cout << "Default constructor called" << std::endl;
    }

    Fixed::Fixed( Fixed const &cp ) {
        // std::cout << "Copy constructor called" << std::endl;
        *this = cp;
    }

    Fixed::Fixed( int var ) {
        // std::cout << "Int constructor called" << std::endl;
        _raw = 256 * var;
    }

    Fixed::Fixed( float var ) {
        // std::cout << "Float constructor called" << std::endl;
        _raw = roundf(256 * var);
    }

    Fixed::~Fixed( void ) {
        // std::cout << "Destructor called" << std::endl;
        return ;
    }

//method
    int     Fixed::getRawBits( void ) const {
        // std::cout << "getRawBits member function called" << std::endl;
        return _raw;
    }

    void    Fixed::setRawBits( int var ) {
        // std::cout << "setRaw member function called" << std::endl;
        _raw = var;
    }

    float Fixed::toFloat( void ) const {
        return (((float)_raw / 256));
    }

    int Fixed::toInt( void ) const {
        return (_raw / 256);
    }

//static method

    Fixed        &Fixed::max(Fixed &src1, Fixed &src2) {
        if (src1 > src2)
            return src1;
        return src2;
    }

    Fixed       const &Fixed::max(Fixed const &src1, Fixed const &src2) {
        if (src1 > src2)
            return src1;
        return src2;
    }

    Fixed        &Fixed::min(Fixed &src1, Fixed &src2) {
        if (src1 < src2)
            return src1;
        return src2;
    }

    Fixed       const &Fixed::min(Fixed const &src1, Fixed const &src2) {
        if (src1 < src2)
            return src1;
        return src2;
    }

//overloading
    Fixed   &Fixed::operator=( Fixed const &cp ) {
        // std::cout << "Assignation operator called" << std::endl;
        this->_raw = cp.getRawBits();
        return *this;
    }

    bool                Fixed::operator<(Fixed const &src) const {
        if (getRawBits() < src.getRawBits())
            return true;
        return false;
    }

    bool                Fixed::operator>(Fixed const &src) const {
        if (getRawBits() > src.getRawBits())
            return true;
        return false;
    }

    bool                Fixed::operator>=(Fixed const &src) const {
        if (getRawBits() >= src.getRawBits())
            return true;
        return false;
    }

    bool                Fixed::operator<=(Fixed const &src) const {
        if (getRawBits() <= src.getRawBits())
            return true;
        return false;
    }

    bool                Fixed::operator==(Fixed const &src) const {
        if (getRawBits() == src.getRawBits())
            return true;
        return false;
    }

    bool                Fixed::operator!=(Fixed const &src) const {
        if (getRawBits() != src.getRawBits())
            return true;
        return false;
    }

    Fixed               &Fixed::operator+(Fixed const src) {
        return (*(new Fixed(toFloat() + src.toFloat())));
    }

    Fixed               &Fixed::operator-(Fixed const src) {
        return (*(new Fixed(toFloat() - src.toFloat())));

    }

    Fixed               &Fixed::operator*(Fixed const src) {
        return (*(new Fixed(toFloat() * src.toFloat())));
    }

    Fixed               &Fixed::operator/(Fixed const src) {
        return (*(new Fixed(toFloat() / src.toFloat())));
    }

    Fixed               &Fixed::operator++(void) {
        _raw++;
        return (*this);
    }

    Fixed               Fixed::operator++(int) {
        Fixed   *res = new Fixed(*this);

        _raw++;
        return (*res);
    }

    Fixed               &Fixed::operator--(void) {
        _raw--;
        return (*this);
    }

    Fixed               Fixed::operator--(int) {
        Fixed   *res = new Fixed(*this);

        _raw--;
        return (*res);
    }

// output overloading
    std::ostream    &operator<<(std::ostream & input, const Fixed & rvalue) {
        input << rvalue.toFloat();
        return (input);
    }
