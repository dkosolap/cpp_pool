#ifndef AMATERIA_HPP
# define AMATERIA_HPP 
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
protected:
	std::string		_type;
	unsigned int	xp_;
	AMateria();
public:
	AMateria( AMateria const &ref );
	AMateria 	&operator=( AMateria const &ref );
	virtual ~AMateria();
	
	AMateria(std::string const &type);
	std::string const		&getType() const; // Returns the materia type
	unsigned int			getXP() const; // Returns the Materia s XP
	virtual AMateria*		clone() const = 0;
	virtual void			use(ICharacter& target);
};

#endif
