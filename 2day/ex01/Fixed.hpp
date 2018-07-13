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
};

std::ostream& operator<<(std::ostream& os, const Fixed& rf);

#endif