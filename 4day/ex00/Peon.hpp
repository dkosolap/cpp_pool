#ifndef PEOPN_HPP
# define PEOPN_HPP 
# include "Victim.hpp"

class Peon : public Victim {
	
public:
	Peon( std::string name );
	~Peon( void );
	void	getPolymorphed() const;

};


#endif
