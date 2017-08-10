#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H 
# include <iostream>
# include <cmath>

class   Fixed {

private:
    int                 _raw;
    static const int    _lit;
public:

    Fixed( void );                                       //
    Fixed( Fixed const &cp );                            //
    Fixed( int var );                                    //
    Fixed( float var );                                  //
    ~Fixed( void );                                      //

    static Fixed        &max(Fixed &src1, Fixed &src2);
    static Fixed const  &max(Fixed const &src1, Fixed const &src2);
    static Fixed        &min(Fixed &src1, Fixed &src2);
    static Fixed const  &min(Fixed const &src1, Fixed const &src2);

    int                 getRawBits( void ) const;        //
    void                setRawBits( int var );           //

    float               toFloat( void ) const;           //
    int                 toInt( void ) const;             //

    Fixed               &operator=( Fixed const &cp );   //
    bool                operator<(Fixed const &src) const;
    bool                operator>(Fixed const &src) const;
    bool                operator>=(Fixed const &src) const;
    bool                operator<=(Fixed const &src) const;
    bool                operator==(Fixed const &src) const;
    bool                operator!=(Fixed const &src) const;
    Fixed               &operator+(Fixed const src);
    Fixed               &operator-(Fixed const src);
    Fixed               &operator*(Fixed const src);
    Fixed               &operator/(Fixed const src);
    Fixed               &operator++(void);
    Fixed               operator++(int);
    Fixed               &operator--(void);
    Fixed               operator--(int);
};
    std::ostream    &operator<<(std::ostream & input, const Fixed & rvalue);    //

#endif
