#ifndef VICTIM_HPP
# define VICTIM_HPP 
# include <iostream>

class Victim {
	Victim( void );
protected:
	std::string		_name;
public:
	Victim( Victim const &ref );
	~Victim( void );
	Victim 	&operator=( Victim const &ref);

	Victim( std::string name);
	std::string		const getName( void ) const;
	
	virtual void	getPolymorphed() const;
};

std::ostream	&operator<<( std::ostream &os, Victim const &ref);


#endif
