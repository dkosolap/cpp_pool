#ifndef SORCERER_HPP
# define SORCERER_HPP 
# include <iostream>
# include "Victim.hpp"

class Sorcerer {
	std::string		_name;
	std::string		_title;
	Sorcerer( void );
public:

	Sorcerer( Sorcerer const &ref );
	~Sorcerer(void);
	Sorcerer 	&operator-( Sorcerer const &ref );
	
	Sorcerer( std::string name, std::string title );
	std::string		const &getName( void ) const;
	std::string		const &getTitle( void ) const;

	void		polymorph(Victim const &vic) const;
};

std::ostream	&operator<<( std::ostream &os, Sorcerer const &ref);

#endif