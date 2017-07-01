#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H 
# include <iostream>
# include <cmath>

class   Fixed {

private:
    int                 _raw;
    static const int    _lit;
public:
    Fixed( void );
    Fixed( Fixed const &cp );
    Fixed( int var );
    Fixed( float var );
    ~Fixed( void );
    int     getRawBits( void ) const;
    void    setRawBits( int var );
    Fixed    &operator=( Fixed const &cp );
    float toFloat( void ) const;
    int toInt( void ) const;
};
    std::ostream    &operator<<(std::ostream & input, const Fixed & rvalue);

#endif
