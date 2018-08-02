#ifndef ASSAULT_TERMINATOR_HPP
# define ASSAULT_TERMINATOR_HPP 
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

public:
	AssaultTerminator();
	AssaultTerminator( AssaultTerminator const &ref );
	~AssaultTerminator();
	AssaultTerminator 	&operator=( AssaultTerminator const &ref );
	
	ISpaceMarine* clone() const ;
	void battleCry() const ;
	void rangedAttack() const ;
	void meleeAttack() const ;
};

#endif
