#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP 

# include <iostream>
# include <cmath>

class Fixed
{
	int				_fp;
	static const int	_fb = 8;

	public:
		Fixed( void );
		Fixed( Fixed const  &ref );
		Fixed( int num );
		Fixed( float num );
		~Fixed( void );

		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		float		toFloat( void ) const;
		int			toInt( void ) const;

		Fixed		&operator=( Fixed const &ref );
		bool		operator<( Fixed const &ref ) const;
		bool		operator>( Fixed const &ref ) const;
		bool		operator<=( Fixed const &ref ) const;
		bool		operator>=( Fixed const &ref ) const;
		bool		operator==( Fixed const &ref ) const;
		bool		operator!=( Fixed const &ref ) const;

		Fixed  		&operator+( Fixed const &ref );
		Fixed  		&operator-( Fixed const &ref );
		Fixed  		&operator*( Fixed const &ref );
		Fixed  		&operator/( Fixed const &ref );

		Fixed 		&operator++( void );
		Fixed 		operator++( int );
		Fixed 		&operator--( void );
		Fixed 		operator--( int );

		static Fixed		&max(Fixed &first, Fixed &second);
		static const Fixed	&max(Fixed const &first, Fixed const &second);
		static Fixed		&min(Fixed &first, Fixed &second);
		static const Fixed	&min(Fixed const &first, Fixed const &second);
				
};

std::ostream& operator<<(std::ostream& os, const Fixed& rf);

#endif