#ifndef SQUAD_HPP
# define SQUAD_HPP 
# define MAX 16 
# include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad {
	int				_count;
	ISpaceMarine	*_units[MAX];
public:
	Squad();
	Squad( Squad const &ref );
	~Squad();
	Squad 	&operator=( Squad const &ref );
	

	int		getCount() const;
	ISpaceMarine	*getUnit(int index) const;
	int				push(ISpaceMarine *unit);
};

#endif