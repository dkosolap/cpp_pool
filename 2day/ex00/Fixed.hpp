#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H 
# include <iostream>

class   Fixed {

private:
    int                 _raw;
    static const int    _lit;
public:
    Fixed( void );
    Fixed( Fixed const &cp );
    ~Fixed( void );
    int     getRawBits( void ) const;
    void    setRawBits( int var );
    Fixed    &operator=( Fixed const &cp );
};

#endif
