#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP 

#include <iostream>

class Fixed
{
	int				_fp;
	static const int	_fb = 8;

	public:
		Fixed( void );
		Fixed( Fixed const  &ref );
		~Fixed( void );

		Fixed		&operator=( Fixed const &ref );
		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		
};

#endif