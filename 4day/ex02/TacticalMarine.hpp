#ifndef TACTIACAL_MARINE_HPP
# define TACTIACAL_MARINE_HPP 
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {

public:
	TacticalMarine();
	TacticalMarine( TacticalMarine const &ref );
	~TacticalMarine();
	TacticalMarine 	&operator=( TacticalMarine const &ref );
	
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
