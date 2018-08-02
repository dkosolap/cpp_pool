#ifndef CHARACTER_HPP
# define CHARACTER_HPP 
# include "ICharacter.hpp"

class Character : public ICharacter {
	std::string	_name;
	AMateria	*_mat[4];
	int			_count;
public:
	Character();
	Character( Character const &ref );
	Character 			&operator=( Character const &ref );
	~Character();

	Character( std::string const &name );
	std::string const	&getName() const;
	void				equip(AMateria* m);
	void				use(int idx, ICharacter& target);
	void				unequip(int idx);
};

#endif
